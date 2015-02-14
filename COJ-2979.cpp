#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int x[50],cont=0;
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		for(int i=0;i<n;i++){
			if(x[i] != i+1){
				cont++;
			}
		}
		cout<<cont<<endl;
	}
	return 0;
}

