#include <cstdlib>
#include <iostream>
#include <math.h>
#define MAX 50

using namespace std;

long long pot(int i, int p)
{    long long sum=i;
     for(int j=2;j<=p;j++) sum*=i;
     return sum;
}

int main()
{   double p;
    while(cin>>p){
       if(!p) break;
       bool impr=false;
       int tam;
       if(p<0){
          tam=sqrt(p*-1);
          for(int i=-2;i>=-tam;i--){
             long long res=i;
             int k=2;
             while(res>p){
                res = pot(i,k);
                k++;
             }
             if(res==p){
                cout<<k-1<<endl;
                impr=true;
                break;
             }
          }
          if(!impr) cout<<"1"<<endl;
       }
       else{
          tam=sqrt(p);
          for(int i=2;i<=tam;i++){
             long long res=i;
             int k=2;
             while(res<p){
                res = pot(i,k);
                k++;
             }
             if(res==p){
                cout<<k-1<<endl;
                impr=true;
                break;
             }
          }
          if(!impr) cout<<"1"<<endl;       
       }
    }
    
    return 0;
}
