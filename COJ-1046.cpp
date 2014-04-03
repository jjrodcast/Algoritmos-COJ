#include <cstdlib>
#include <iostream>
#define FOR(i,a,b) for(i=a;i<=b;i++)
using namespace std;
int x[1000];

int productos(long long a, long long b){
    int i;
    long long sum=0;
    FOR(i,a,b){
        x[i]=(i*(i+1)*(i+2));
        sum+=x[i];
    }
    return sum%100;
}
int main()
{   int n,prod;
    long long a,b;
    cin>>n;
    while(n--){
      cin>>a>>b;
      prod=productos(a,b); 
      cout<<prod<<endl; 
    }
    return 0;
}
