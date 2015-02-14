#include <iostream>
using namespace std;

int MAX=1000000;
int num[1000001];

void generador()
{	int k;
    //clock_t start, end;
    //start = clock();
	num[0]=0;
	for(int i=1;i<=MAX;i++){
		num[i]=1;
	}
	k=2;
	while((MAX/k)>1){
		for(int i=1;i<=MAX/k;i++){
			num[k*i]+=1;
		}
		k++;
	}
	//end = clock();
	//cout<<(double)(end-start)/CLOCKS_PER_SEC<<endl;
}


int main() {
	generador();
    int n,t;
    cin>>t;
    while(t--){
       cin>>n;
       int may=-1,pos;
       for(int i=0;i<=n;i++){
          if(num[i]>may){
             may=num[i];
             pos = i;
          }
       }
       cout<<pos<<endl;
    }
	return 0;
}

