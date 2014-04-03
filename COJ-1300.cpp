#include <cstdlib>
#include <iostream>
#include <set>
using namespace std;

int main()
{   set<int> s;
    int N=10,num;
    while(N--){
       cin>>num;
       s.insert(num%42);
    }
    cout<<s.size()<<endl;
    return 0;
}
