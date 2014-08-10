#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <string.h>

using namespace std;

void mySwap(int& i, int& j)
{  int temp;
   if(i>j){
      temp=i;
      i=j;
      j=temp;
   }
}

int main()
{   int a,b,c;
    string cad;
    cin>>a>>b>>c>>cad;
    mySwap(a,b);
    mySwap(a,c);
    mySwap(b,c);
    if(cad=="ABC") printf("%d %d %d\n",a,b,c);
    if(cad=="ACB") printf("%d %d %d\n",a,c,b);
    if(cad=="BAC") printf("%d %d %d\n",b,a,c);
    if(cad=="BCA") printf("%d %d %d\n",b,c,a);
    if(cad=="CAB") printf("%d %d %d\n",c,a,b);
    if(cad=="CBA") printf("%d %d %d\n",c,b,a);        
    return 0;
}
