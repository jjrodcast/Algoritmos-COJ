#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <cmath>

using namespace std;

int main ()
{  int x,y,n;
   cin>>n;
   while(n--){
     cin>>x>>y;
     if(x==y && x%2==0 && y%2==0) cout<<x+y<<endl;
     else if(x==y && x%2!=0 && y%2!=0) cout<<(x+y)-1<<endl;
     else if(y<=x){
         if(abs(x-y)==2 && x%2==0 && y%2==0) cout<<x+y<<endl;
         else if(abs(x-y)==2 && x%2!=0 && y%2!=0) cout<<(x+y)-1<<endl;
         else cout<<"No Number"<<endl;
     }
     else cout<<"No Number"<<endl;
   } 
   return 0;   
}
