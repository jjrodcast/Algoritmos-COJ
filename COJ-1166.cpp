#include <cstdlib>
#include <iostream>
using namespace std;
int N,M,val,odd,even;
int main()
{   while(cin>>N){
        while(N--){
           cin>>M;
           odd=even=0;
           for(int i=0;i<M;i++){
              cin>>val;
              if(val%2) even++;
              else odd++;
           }
           cout<<odd<<" even and "<<even<<" odd."<<endl;
        }
    }
    return 0;
}
