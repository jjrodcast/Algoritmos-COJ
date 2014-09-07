#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a,b,c;
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		double d = sqrt((b*b)-4*a*c);
		if(d>0){
			cout<<"SI";
		}
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}
