#include <iostream>

using namespace std;

int main(){
    int p,r1,c1,r2,c2;
    while(cin>>p>>r1>>c1>>r2>>c2){
        bool yes=true;
        if(c2<c1-1 || c2>c1+1 || r2<r1-1 || r2>r1+1)
           yes=false;
        else{
           if(r2==r1+1 || r2==r1-1){
                if(c1!=c2) yes=false;
           }
           else if(r2==r1){
              if(c2!=c1+1 && c2!=c1-1) yes=false;
           }
        } 
        if(yes){
          (p==1)?cout<<"2":cout<<"1";
        }
        else cout<<"ERROR";
        cout<<endl;    
    }
}
