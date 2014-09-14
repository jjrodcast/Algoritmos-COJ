#include <cstdlib>
#include <iostream>
#include <vector>
#define MAX 1000
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{   ll num;
    while((cin>>num)&& num>=0){
       if(!num){
         cout<<"0"<<endl;
         continue;
       }
       vi x;
       while(num>0){
          x.push_back(num%3);
          num/=3;
       }
       for(int i=x.size()-1;i>=0;i--){
          cout<<x[i];
       }
       cout<<endl;
    }
    return 0;
}
