#include <iostream>
#define FOR(i,n) for(__typeof(n) i=1;i<=n;i++)
using namespace std;

int main() {
	int N;
	cin>>N;
	FOR(i,N){
		cout<<i<<": I am participating in the Engineer's day."<<endl;
	}
	return 0;
}

