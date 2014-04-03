#include <cstdlib>
#include <iostream>
#include <string.h>
#define LIM 101
using namespace std;

int main()
{   char pal[LIM];
    int n,may,min;
    cin>>n;
    while(n--){
       cin>>pal;
       int x=strlen(pal);
       may=min=0;
       for(int i=0;i<x;i++){
          if(pal[i]>='a' && pal[i]<='z') min+=1;
          if(pal[i]>='A' && pal[i]<='Z') may+=1;
       }
       if(min==may) cout<<"SI"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}
