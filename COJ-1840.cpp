#include <iostream>
#include <string.h>

#define FOR(i,n) for(__typeof(n) i=0;i<n;i++)
using namespace std;

int main() {
	int N;
	cin>>N;
	while(N--){
		char pass[101];
		int vals[30]={0};
		cin>>pass;
		int n=strlen(pass);
		FOR(i,n){
			int v = pass[i]-'A';
			vals[v]++;
		}
		if(vals[1]==vals[17] && vals[17]==vals[14] && vals[14]==vals[10] && vals[10]==vals[4] && vals[4]==vals[13])
			cout<<"No Secure";
		else cout<<"Secure";
		cout<<endl;
	}
	return 0;
}
