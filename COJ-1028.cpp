#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
#define LIM 100
using namespace std;

int main()
{   char s[LIM],t[LIM];
    while(cin>>s>>t){
       int j=0;
       bool band=false;
       for(int i=0;i<strlen(t);i++){
          if(t[i]==s[j]){
          j++;
          }
          if(j==strlen(s)){
             band=true;
             break;
          }
       }
    printf("%s\n",band?"Yes":"No");
       
    }
    return 0;
}
