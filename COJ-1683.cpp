#include <cstdlib>
#include <iostream>
#define FOR(i,n) for(__typeof(n)i=1;i<=(n/2)+1;i++)
using namespace std;

int main()
{   int t;
    cin>>t;
    while(t--){
        int n, sum=0;
        cin>>n;
        FOR(i,n){
          if(!(n%i)) sum+=i;
        }
        if(sum==n) cout<<"Perfect";
        else if(sum>n) cout<<"Abundant";
        else cout<<"Deficient";
        cout<<endl;
    }
    return 0;
}
