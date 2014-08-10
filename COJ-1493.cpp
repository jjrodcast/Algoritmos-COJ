#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
#define PI 3.14
using namespace std;

string s;
double a,b;

int main()
{   cin>>s;
    if(s=="circle"){
       cin>>a;
       printf("%.2f\n",PI*(a*a));
    } 
    if(s=="triangle"){
      cin>>a>>b;
      printf("%.2f\n",(a*b)/2);
    }
    if(s=="rhombus"){
      cin>>a>>b;
      printf("%.2f\n",(a*b)/2);
    }
    return 0;
}
