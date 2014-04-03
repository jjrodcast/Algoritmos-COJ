#include <cstdlib>
#include <iostream>
using namespace std;
long int longitud(int num);
int main()
{   long int i,j;
    while(cin>>i>>j){
       if((i<1 || i>1000000)||(j<1 || j>1000000)) break;
       int tempi=i;
       int tempj=j;
       long int mayor=0;
       int t;
       bool cambio=false;
       if(j<i){
         t=j;
         j=i;
         i=t;
         cambio=true;
       }
       while(i<=j){
           long int m = longitud(i);
           if(m>mayor) mayor = m;
           i++;
       }
       if(cambio) cout<<tempi<<" "<<tempj<<" "<<mayor<<endl;
       else cout<<tempi<<" "<<tempj<<" "<<mayor<<endl;
    }
    return 0;
}

long int longitud(int num){
     long int cont=1;
     while(num!=1){
          if(!(num%2)) num>>=1;
          else num=(3*num)+1;
          cont++;         
     }
     return cont;
}
