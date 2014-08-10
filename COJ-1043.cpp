#include <cstdlib>
#include <iostream>
#define MAX 15
#define rfor(n,i) for(__typeof(n)i=n-1;i>=0;i--)
using namespace std;

short int v[MAX]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384};
int main()
{   int T,peso;
    cin>>T;
    while(T--){
       cin>>peso;
       int temp=peso;
       int sum=0,s=0;
       bool val[MAX]={0};
       rfor(MAX,i){
         if(v[i]<=temp){
           sum+=v[i];
           temp-=v[i];
           val[i]=1;
           s++;
         }
         if(sum==peso) break;
       } 
       s--;
       for(int i=0;i<MAX;i++){
         if(val[i]){
           cout<<i;
           if(s>0){
             cout<<" ";
             s--;
           }
         }    
       }
       cout<<endl;
    }
    return 0;
}
