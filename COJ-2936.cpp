#include <iostream>
using namespace std;

typedef long long LL;

int main() {
	LL N,M;
	while(cin>>N>>M){
		LL t,q;
		t = N*(N-1)/2;
		q = M*(M-1)/2;
		cout<<"Triangles: "<<(t*M + q*N)<<endl;
		cout<<"Quadrilaterals: "<<(t*q)<<endl;
		cout<<endl;
	}
	return 0;
}
