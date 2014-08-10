#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{   long long a,b;
    while(cin>>a>>b){
      long long r=2*(a+b)+(a-b)+(b-a);
      cout<<r<<endl;
    }
    return 0;
}
