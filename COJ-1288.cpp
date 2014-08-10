#include <cstdlib>
#include <string.h>
#include <iostream>
#define LIM 1001
using namespace std;
char num[LIM];

bool div2(int n)
{    int x = strlen(num);
     if((num[x-1]-'0')%2!=0)
        return false;
     return true;
}

bool div3(int n)
{    int sum =0, x = strlen(num);
     for(int i=0;i<x;i++){
       sum+=(num[i]-'0');
     }
     if(sum%3!=0) return false;
     return true;
}

int main()
{  int T,n;
   cin>>T;
   while(T--){
     cin>>num;
     if(div2(n) && div3(n))cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
   }
   return 0;
}
