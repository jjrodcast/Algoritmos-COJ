#include <cstdlib>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{   char a[1001], b[1001];
    while(scanf("%s",&a)!=EOF){
       cin>>b;
       sort(a,a+strlen(a));
       sort(b,b+strlen(b));
       int i,j;
       i=j=0;
       while(a[i] && b[j]){
         if(a[i]>b[j]) j++;
         else if(a[i]<b[j])i++;
         else if(a[i]==b[j]){
             cout<<b[j];
             i++;
             j++;
         }
       }
       cout<<endl;
    }       
    return 0;
}
