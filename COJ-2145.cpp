#include <iostream>

#define FOR(i,n) for(__typeof(n) i=0;i<n;i++)

using namespace std;

int main() {
	int n;
	cin>>n;
	int i=1;
	while(n--){
		int n=10, sum=0,men=101,may=0;
		int x[10];
		FOR(i,n){
			cin>>x[i];
			sum+=x[i];
			if(x[i]<men) men = x[i];
			if(x[i]>may) may = x[i];
		}
		sum-=(men+may);
		cout<<i++<<" "<<sum<<endl;
	}
	return 0;
}
