#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

struct numero{
       float num;
       int pos;
};

int main()
{   struct numero nm[102];
    float may=-99999;
    int n,i,ps;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>nm[i].num;
        nm[i].pos=i;   
        if(nm[i].num>=may){
           may=nm[i].num;
           ps=nm[i].pos;
        }           
    }
    cout<<ps<<endl;
    return 0;
}
