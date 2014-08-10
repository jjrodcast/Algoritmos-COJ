#include <cstdlib>
#include <iostream>

using namespace std;

const int org[6]={1,1,2,2,2,8};

int main()
{   int t;
    cin>>t;
    while(t--){
       int yours[6];
       for(int i=0;i<6;i++){
          cin>>yours[i];
       }
       for(int i=0;i<5;i++){
          cout<<org[i]-yours[i]<<" ";
       }
       cout<<org[5]-yours[5]<<endl;
    }
    return 0;
}
