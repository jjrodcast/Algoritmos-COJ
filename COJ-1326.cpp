#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    while(n--){
      int acc, trans;
      cin>>acc;
      cin>>trans;
      for(int i=0;i<trans;i++){
        char c; int val;
        cin>>c>>val;
        if(c=='C'){
          acc+=val;
        }
        else acc-=val;
      }
      cout<<acc<<endl;
    }    
    return 0;
}
