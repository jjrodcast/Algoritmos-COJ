#include <cstdlib>
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#define MAX 100000

using namespace std;

int main()
{   char cad[MAX];
    while(gets(cad)){
        if(cad[0]=='*') break;
        int space=0, n=strlen(cad);
        char car=tolower(cad[0]);
        bool es=true;
        for(int i=1;i<n;i++){
           if(cad[i-1]==' '){
              space++;
              if(car!=tolower(cad[i])){
                es=false; break;
              }
           }
        }
        if(!space || es==true) cout<<"Y";
        else cout<<"N";
        cout<<endl;
    }
    return 0;
}
