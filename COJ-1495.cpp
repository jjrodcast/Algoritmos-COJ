#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{   int x[1001],i=0,temp,N;
    cin>>N;
    while(N--){
      cin>>temp;
      x[i++]=temp;
    }
    sort(x,x+i);
    for(int j=0;j<i;j++){
       cout<<x[j]<<endl;
    }
    return 0;
}
