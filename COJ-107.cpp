#include <cstdlib>
#include <iostream>
using namespace std;
int x[100],y[100];
void calcular()
{    x[0]=1,y[0]=1;
     for(int i=1;i<100;i++){
        x[i]=(((i+1)*(i+1))+x[i-1]);
        y[i]=(((i+1)*(i+1)*(i+1))+y[i-1]);
     }
}

int main()
{   int n;
    calcular();
    while((cin>>n)&& (n>0 && n<=100)){
         cout<<x[n-1]<<" "<<y[n-1]<<endl;
    }
    return 0;
}
