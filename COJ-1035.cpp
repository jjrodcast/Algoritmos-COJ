#include <iostream>
#include <math.h>
#include <cmath>
#define MOD 1000000
using namespace std;
int sol[MOD+1];

int resp(int n)
{	if(n==0) return 1;
	else if(sol[n]!=0) return sol[n];
	else return sol[n]= (resp((int)(n-sqrt(n)))+resp((int)log(n))+resp((int)n*pow(sin(n),2)))%MOD;
	
}

int main() {
	int num;
	while(cin>>num){
		if(num==-1) break;
		cout<<resp(num)<<endl;
	}
	return 0;
}

