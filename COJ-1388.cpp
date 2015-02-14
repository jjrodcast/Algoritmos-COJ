#include <iostream>
using namespace std;

int main() {
	int t, x[5],A,B;
	cin>>t;
	while(t--){
		cin>>A>>B;
		if(B==0){
			cout<<1<<endl;
			continue;
		}
		x[1]=A;
		x[2]=A*A;
		x[3]=A*A*A;
		x[0]=A*A*A*A;
		cout<<x[B%4]%10<<endl;
	}
	return 0;
}

