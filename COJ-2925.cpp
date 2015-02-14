#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
		int a,b,veces=0;
		cin>>a>>b;
		if(b>=a){
			cout<<(b-a)<<endl;
			continue;
		}
		while(a>b){
			a/=2;
			veces++;
		}
		cout<<veces+(b-a)<<endl;
	}
	return 0;
}

