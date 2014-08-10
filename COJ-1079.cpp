#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#define MAX 100
using namespace std;
int tri[100][100];

int main()
{   int t,i,j,n;
    cin>>t;
    while(t--){
      cin>>n;
      for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
          cin>>tri[i][j];
        }
      }
      //REALIZAMOS EL PD PARA ALAMACENAR LAS SUMAS
      for(i=n-2;i>=0;i--){
        for(j=0;j<=i;j++){
           tri[i][j]+=max(tri[i+1][j],tri[i+1][j+1]);
        }
      }
      cout<<tri[0][0]<<endl;
    }
    
    return 0;
}
