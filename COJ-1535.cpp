#include <cstdlib>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{   int n, x[10];
    bool dOrd,tittle=true;
    cin>>n;
    while(n--){
      for(int i=0;i<10;i++){
         cin>>x[i];
      }
      dOrd=false;
      if(x[0]<x[1]){
        for(int i=1;i<9 && !dOrd;i++){
           if(x[i]>x[i+1]) dOrd=true;
        }
      }
      else{
        for(int i=1;i<9 && !dOrd;i++){
           if(x[i]<x[i+1]) dOrd=true;
        }      
      }
      if(tittle){
       printf("Lumberjacks:\n");
       tittle=false;
      }
      printf("%s",(!dOrd)?"Ordered\n":"Unordered\n");
    }
    return 0;
}
