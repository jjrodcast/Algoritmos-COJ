#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{   int n,x[102],sum,comb;
    while(cin>>n){
     for(int i=0;i<n;i++){
        cin>>x[i];
      }
      sum=0;
      for(int i=0;i<n;i++)sum+=x[i];
      comb=0;
      for(int i=0;i<n;i++){
         if((sum-x[i])%2==0) comb++;
      }
      cout<<comb<<endl;
    }
    
    return 0;
}
