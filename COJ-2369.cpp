#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
		long long A,B,C;
		cin>>A>>B>>C;
		long long x[6];
		x[0]=A+(B*C);
		x[1]=(A+B)*C;
		x[2]=A*(B+C);
		x[3]=(A*B)+C;
		x[4]=(A+C)*B;
		x[5]=(A*C)+B;
		sort(x,x+6);
		cout<<x[0]<<" "<<x[5]<<endl;
	}	
	return 0;
}

