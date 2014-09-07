#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#define LIM 7
using namespace std;

char num[LIM];
char temp[LIM];
int main()
{   
    while(cin.getline(num,LIM))
    {   int cont = 0;
        for(int i=0;i<strlen(num);i++){
           temp[i]=num[i];
        }                   
        sort(num,num+strlen(num));
        do{  cont++;
             if(strcmp(num,temp)>0)break;
          }while(next_permutation(num,num+strlen(num)));
       if(num[0]=='0'){
          cout<<"0"<<endl;
          continue;
       }
       (cont>1)?cout<<num:cout<<"0";
       cout<<endl;
    }     
    return 0;
}
