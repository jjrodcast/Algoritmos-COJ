#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{   int n,cont=0;
    while((cin>>n) && (n>=0 && n<100)){
       if(n==42 || cont>0) cont++;
       else cout<<n<<endl;
    }
    return 0;
}
