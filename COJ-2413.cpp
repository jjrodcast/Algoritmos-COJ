#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>
#define MAX 20000
using namespace std;

int main()
{   char cad[MAX];
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
       cin>>cad;
       int n=strlen(cad);
       if(cad[n-1]=='0' || cad[n-1]=='5') cout<<"YES";
       else cout<<"NO";
       cout<<endl;
    }
    return 0;
}
