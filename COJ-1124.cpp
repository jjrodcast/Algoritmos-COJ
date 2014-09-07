#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cmath>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

#define sz(a) int((a).size())
#define pb push_back

typedef long long ll;
typedef vector<int> vi;

bool is_prime[1000001];
vi prime;
void sieve()
{
	memset(is_prime,true,sizeof is_prime);
	for(int i=2;i<1000001;i+=2)
		is_prime[i]=false;
	prime.pb(2);
	for(int i=3;i<=1000;i+=2)
	{
		if(is_prime[i])
		{
			for(int j=i;i*j<=1000001;j++)
				is_prime[j*i]=false;
			prime.pb(i);
		}
	}
	for(int i=1001;i<=1000000;i+=2)
	{
		if(is_prime[i])
			prime.pb(i);
	}
}
int main()
{
	
	sieve();
	while(1)
	{
		int n;
		cin>>n;
		if(n==0 ) break;
		bool flag=false;
		int no;
		for(int i=1;i<sz(prime);i++)
		{
			if(flag || prime[i]>n)
				break;
			if(is_prime[n-prime[i]])
			{
				flag=true;
				no=prime[i];
			}
		}
		if(flag)
			cout<<n<<" = "<<no<<" + "<<n-no<<endl;
		else
			cout<<"Goldbach's conjecture is wrong."<<endl;
	}
	
	return 0;
}
