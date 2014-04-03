#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
#define NO cout<<"NO"<<endl;
#define YES cout<<"YES"<<endl;

int main()
{   char num[1002];
    int n, numero, T;
    cin>>T;
    cin.ignore();
    while(T--){
       gets(num);
       n=strlen(num);
       numero = ((int)(num[n-2]-48)*10)+(int)num[n-1]-48;
       if(numero%4==0) YES
       else NO
    }
    return 0;
}
