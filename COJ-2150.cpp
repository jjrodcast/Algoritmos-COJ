#include <cstdlib>
#include <iostream>
#include <string.h>
#define LIM 110
using namespace std;

int main()
{   char pal[LIM];
    int n;
    cin>>n;
    while(n--){
       cin>>pal;
       int len = strlen(pal);
       int may1,min1,may2,min2;
       may1=min1=may2=min2=0;
       if(len%2!=0){
         for(int i=0;i<=len/2;i++){
          if(pal[i]>='a' && pal[i]<='z') min1+=1;
          else if(pal[i]>='A' && pal[i]<='Z') may1+=1;
         }
         for(int i=(len/2);i<len;i++){
          if(pal[i]>='a' && pal[i]<='z') min2+=1;
          else if(pal[i]>='A' && pal[i]<='Z') may2+=1;
         }
          if(min1==min2 && may1==may2) cout<<"SI"<<endl;
          else cout<<"NO"<<endl;
       } 
       else{
          for(int i=0;i<len/2;i++){
          if(pal[i]>='a' && pal[i]<='z') min1+=1;
          else if(pal[i]>='A' && pal[i]<='Z') may1+=1;
         }
         for(int i=(len/2);i<len;i++){
          if(pal[i]>='a' && pal[i]<='z') min2+=1;
          else if(pal[i]>='A' && pal[i]<='Z') may2+=1;
         }
          if(min1==min2 && may1==may2) cout<<"SI"<<endl;
          else cout<<"NO"<<endl;           
       }
    }
    return 0;
}
