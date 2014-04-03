#include <cstdlib>
#include <iostream>
#include <map>
using namespace std;

map<int,long long> dp;

long long funcion(int n)
{    if(n==0) return 0; //caso base
     if(dp[n]!=0) return dp[n];
     long long temp=funcion(n/2)+funcion(n/3)+funcion(n/4);
     if(temp>n) dp[n]=temp;
     else dp[n]=n;
     return dp[n];
}

int main()
{   int n;
    while(cin>>n){
     cout<<funcion(n)<<endl;
    }
    return 0;
}
