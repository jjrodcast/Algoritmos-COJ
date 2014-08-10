#include <cstdlib>
#include <iostream>
#include <string.h>
#include <string>
#include <cstring>

using namespace std;

int main()
{   string nom;
    int sq,s1,s2;
    while(cin>>nom){
       if(nom=="square"){
          cin>>sq;
          cout<<sq*sq<<endl;
       }else{
          cin>>s1>>s2;
          cout<<s1*s2<<endl;
       }
    }
    
    return 0;
}
