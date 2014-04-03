#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{   int r, N;
    while(cin>>N){
       if(N==1){cout<<"0"<<endl; continue;}
       if(!((N+1)%3)) r=(((N + 1)/3)<<1)-1;
       else{
          if(!(N%3)) r=(N/3)<<1;
          else r=((N-1)/3)<<1;
       } 
       cout<<r<<endl;   
    }  
    return 0;
}
