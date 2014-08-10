#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstring>
#include <string>
#define LIM 1002
using namespace std;

int main()
{   int  casos,N,D;
    string cad;
    cin>>casos;
    while(casos--){
       cin>>N>>D; cin>>cad;
       int x[LIM]={0};
       for(int i=0;i<N;i++){
           cin>>x[i];
       }
       sort(x,x+N);
       int suma=0;
       int k=0;
       if(cad=="regulate"){
          while(k<D){
            suma+=x[N-1];
            k++;
            N--;
           }
       }
       else{
         for(int i=0;i<D;i++){
             suma+=x[i];
         } 
       }
     cout<<suma<<endl;
    }
    return 0;
}
