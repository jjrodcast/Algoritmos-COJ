#include <cstdlib>
#include <iostream>
using namespace std;

int main(){    
    int t,n,i;
    int S; 
    cin>>t; 
    for(int tc=1;tc<=t;tc++){
        cin>>n;  
        S=0;    
        for(i=1;i*i<n;i++)
            if(n%i==0)
                S+=i+n/i;
        
        if(i*i==n) S+=i;
        S-=n;
       cout<<S<<endl;
    }       
    return 0;
}
