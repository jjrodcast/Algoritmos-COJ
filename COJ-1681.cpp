#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{   double a,b,c;
    cin>>a>>b>>c;
    double d = (b*b)-(4*a*c);
    if(d>=0)puts("YES");
    else puts("NO");
    return 0;
}
