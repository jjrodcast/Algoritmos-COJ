#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{   int balls[501]={0};
    int n;
    for(int i=1;i<=500;i++){
       balls[i]=balls[i-1]+i*i;
    }
    while((cin>>n)&&n){
      cout<<balls[n]<<endl;
    }
    return 0;
}
