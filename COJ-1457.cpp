#include <iostream>

using namespace std;

typedef long long LL;

int main() {
	LL a,b;
	cin>>a>>b;
	if(a%2==0){
		cout<<((a/2)*b)*(a-1)<<endl;
	}else{
		cout<<(((a/2)*b)+b)*(a-1)<<endl;
	}
	return 0;
}

