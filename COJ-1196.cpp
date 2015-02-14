#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>

using namespace std;

int n;
int prime[]={0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1};
bool disp[20];
int a[20];
bool candidato(int numero, int index)
{ 
     if ( index == n - 1 ) {
        if (prime [a [index - 1] + numero] && prime [numero + 1])
            return true;
        return false;
    }
    return prime [a [index - 1] + numero];
}


void bt(int level)
{
     if(level==n){
       cout<<a[0];
       for(int i=1;i<n;i++) cout<<" "<<a[i];
       cout<<endl;
       return;
     }
     else{
         for(int i=2;i<=n;i++){
            if(disp[i]){
              if(candidato(i,level)){
                 disp[i] = false;
                 a[level] = i;
                 bt(level+1);
                 disp[i] = true;
                 
              }
            }
         }
         
     }
}


int main()
{    int casos,i=0;
     cin>>casos;
     while(casos--){
        cin>>n;
        a[0]=1;
        memset(disp,true, sizeof(disp));
        cout<<"Case "<<++i<<":"<<endl;
        bt(1);
     }
    return 0;
}





