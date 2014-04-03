#include <cstdlib>
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{   string num;
    while(cin>>num){
       if(num=="END") break;
       if(num=="1") cout<<"1"<<endl;
       else if(num.length()<2 && num!="1") cout<<"2"<<endl;
       else if(num.length() < 10) cout<<"3"<<endl;
       else cout<<"4"<<endl;
    }
    return 0;
}
