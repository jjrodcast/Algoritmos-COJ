#include <cstdlib>
#include <iostream>
#include <math.h>
#define LIM 1001
using namespace std;
int x[LIM], tam, c;
int actualizar(int t)
{    c=1;
     for(int k=1;k<=t;k++){
        if(x[k]!=-1){
           x[c]=x[k];
           c++;
        }
     }
     return c-1;
}

int main()
{   int n;
    while(cin>>n){
      if(n==2)cout<<2<<endl;
      else{
       for(int i=1;i<=n;i++) x[i]=i;
       tam=n;
       int k;
       while(tam>2){
        k=0;
         for(int j=1;j<=tam;j++){
           if(j==(int)pow(2,k)){
                   x[j]=-1;
                   k++;
           }
         }
         tam=actualizar(tam);
       }
       if(tam==2) cout<<x[2]<<endl;
       else cout<<x[1]<<endl;
      }
    }
    return 0;
}
