#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>
#define LIM 20
#define EMPATE if(x==y){winA+=1; winB+=1;}
#define WINA else if((x==4 && y==8)||(x==8 && y==5)||(x==5 && y==4)){winA+=1;}
#define WINB else if((x==4 && y==5)||(x==8 && y==4)||(x==5 && y==8)){winB+=1;}
using namespace std;

int main()
{   int n,winA=0,winB=0;
    char A[LIM],B[LIM];
    cin>>n;
    while(n--){
       cin>>A>>B;     
       int x=strlen(A),y=strlen(B);
       EMPATE
       WINA
       WINB    
    }
    if(winA==winB)printf("tied");
    else if(winA > winB) printf("A win");
    else printf("B win"); 
    printf("\n");
    return 0;
}
