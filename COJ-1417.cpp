#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{   double pos;
    while(cin>>pos){
       if(!pos) break;
       double lim = 1.0/1000;
       printf("Starting height: %.5f meter(s)\n", pos);
       int i=0;
       while(pos>lim){
          printf("Bounce #%d: %.10f meters\n", ++i, pos/2);
          pos/=2;
       }
       cout<<endl;
    }
    return 0;
}
