#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{   int t,NG,NM,MG,MM,Ni;
    cin>>t;
    while(t--){
     cin>>NG>>NM;
     MG=MM=0;
     for(int i=0;i<NG;i++){
        cin>>Ni;
        MG=max(Ni,MG);
     }
     for(int i=0;i<NM;i++){
        cin>>Ni;
        MM=max(Ni,MM);
     }
     if(MG>=MM) cout<<"Godzilla"<<endl;
     else cout<<"MechaGodzilla"<<endl;
    }
    return 0;
}
    
