#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

using namespace std;
#define FOR(i,n) for(i=0;i<n;i++)

int main()
{   char num[1002];
    int n,i,simpar,spar;
    bool band;
    while(gets(num)){
       if(num[0]=='0' && strlen(num)==1) break;
       n=strlen(num);
       band=false;
       simpar=spar=0;
       FOR(i,n){
           int numInt=num[i]-48;
          if(!band){simpar+=numInt; band=true;}
          else{spar+=numInt; band=false;}
       } 
       if((simpar-spar)%11==0) cout<<num<<" is a multiple of 11."<<endl;
       else cout<<num<<" is not a multiple of 11."<<endl;          
    }     
    return 0;
}
