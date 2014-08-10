#include <cstdlib>
#include <iostream>

using namespace std;

int gcd(int a,int b)
{   if(a%b==0) return b;
    else return gcd(b,a%b);
}

int main()
{   int N,i,total=0;
    cin>>N;
    for(i=0;i<N;i++){
       if(gcd(i,N)==1){
          total++;
       }
    }
    cout<<total<<endl;
    return 0;
}

