#include<stdio.h>
#include <iostream>
#define min(a,b)  (a<b? a:b)

using namespace std;

long ugly[1502];


void Ugly()
{	int a,b,c,n;
	long x,y,z;
	ugly[1]=a=b=c=n=1;
	while(n!=1500)
	{
		x=2*ugly[a];
		y=3*ugly[b];
		z=5*ugly[c];
		ugly[++n]=min(x,min(y,z));
		if(ugly[n]==x)a++;
		if(ugly[n]==y)b++;
		if(ugly[n]==z) c++;
	}
}

int main()
{	Ugly();
	int num;
	while((cin>>num) && num){
		cout<<ugly[num]<<endl;
	}
	return 0;
}
