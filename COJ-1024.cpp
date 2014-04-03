#include <cstdlib>
#include <iostream>
#include <stdio.h>
#define LIM 277
using namespace std;
float hangover[LIM];

void guardarValores(){
     hangover[1]=0.5f;
     for(int i=2;i<=LIM;i++){
        hangover[i]=hangover[i-1]+1.0/(i+1);
     }
}
int main()
{   float distancia;
    int i;
    guardarValores();
    while((cin>>distancia) && distancia!=0.00f){
        for(i=0;i<=LIM;i++){
           if(hangover[i]>distancia) break;
        }
        printf("%d card(s)\n", i);
    }
    return 0;
}
