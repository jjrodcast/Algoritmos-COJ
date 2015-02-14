#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin>>n && n){
		cout<<n<<" => "<<((n-1)*(n-1))+n<<endl;
	}
	return 0;
}

