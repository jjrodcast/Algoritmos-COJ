#include <iostream>
using namespace std;

typedef long long LL;


int main() {
	LL t;
	cin>>t;
	while(t--){
		int n,l,w;
		cin>>n>>l>>w;
		n++;
		cout<<((n*(n+1))/2)*(l*w)<<endl;
	}
	return 0;
}

