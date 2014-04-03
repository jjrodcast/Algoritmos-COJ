#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{   int A,B,i=0,j=0,sum=0,x[1000],y[1000];
    cin>>A>>B;
    int tempA=A,tempB=B;
    while(tempA){
       x[i]=tempA%10;
       tempA/=10;
       i++;
    }
    i-=1;
    while(tempB){
       y[j]=tempB%10;
       tempB/=10;
       j++;
    }
    j-=1;
    for(int a=0;a<=i;a++){
       for(int b=0;b<=j;b++){
          sum+=x[a]*y[b];
       }
    }
    cout<<sum<<endl;
    return 0;
}
