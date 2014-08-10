#include <cstdlib>
#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>

using namespace std;
void enOrden(char cad[]);
int main()
{   char cad[1000];
    cin>>cad;
    enOrden(cad);
    cout<<cad<<endl;
    return 0;
}

void enOrden(char cad[])
{    int n=strlen(cad);
     char temp;
     for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
          if(cad[i]>cad[j]){
            temp=cad[i];
            cad[i]=cad[j];
            cad[j]=temp;
          }
       }
     }
}
