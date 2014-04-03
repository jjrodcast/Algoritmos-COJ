#include <cstdlib>
#include <iostream>

using namespace std;

int mask(int numero){
    unsigned int maskara = 0x80000000;
    int unos=0;
    for(int i=0;i<32;i++){
       if((numero & maskara)>0) unos++;
       maskara = (maskara>>1);
    }
    return unos;
}

void bits(int numero){
     int temp=numero,x[10000],i=0;
     while(temp){
         x[i]=temp%2;
         temp/=2;
         i++;
     }
     i-=1;
     for(int j=i;j>=0;j--) cout<<x[j];
}

int main()
{   int num, totalUnos;
    while((cin>>num) && num){
       totalUnos = mask(num);
       
       cout<<"The parity of ";
       bits(num);
       cout<<" is "<<totalUnos<<" (mod 2)."<<endl;
    }
    return 0;
}
