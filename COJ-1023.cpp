#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;
double n1,sum;
int main()
{   for(int i=0;i<12;i++){
        cin>>n1;
        sum+=n1;  
    }
    printf("$%.2f\n",sum/12);
    return 0;
}
