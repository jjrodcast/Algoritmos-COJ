#include <cstdlib>
#include <iostream>

using namespace std;
int a,b,c;
int main()
{   while(cin>>a>>b>>c){
        if(!a && !b && !c) break;
        if((a*a)+(b*b)==(c*c)) cout<<"right"<<endl;
        else if((b*b)+(c*c)==(a*a)) cout<<"right"<<endl;
        else if((a*a)+(c*c)==(b*b)) cout<<"right"<<endl;
        else if(a<=0 || b<=0 || c<=0) cout<<"wrong"<<endl;
        else cout<<"wrong"<<endl;
    }

    return 0;
}
