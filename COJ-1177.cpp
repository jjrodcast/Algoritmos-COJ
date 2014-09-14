#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{   int g;
    while(cin>>g && g){
       char pal[101];
       cin.ignore();
       cin>>pal;
       int n = strlen(pal);
       int salto = strlen(pal)/g;
       int k=salto;
       for(int i=0;i<n;i+=salto){
         for(int j=k-1;j>=i;j--){
            cout<<pal[j];
         }
         k+=salto;
       }
       cout<<endl;
    }
    return 0;    
}

