#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{   int N;
    cin>>N;
    if(N>=0) cout<<(N*(N+1)/2)<<endl;
    else cout<<(((N*-1)*((N*-1)+1)/2)*-1)+1<<endl;
    return 0;
}
