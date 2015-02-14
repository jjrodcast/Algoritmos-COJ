#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
	char num[1001];
	int x[501];
	int j=0;
	cin>>num;
	int n = strlen(num);
	for(int i=0;i<n;i+=2){
		x[j] = num[i]-'0';
		j++;
	}
	sort(x,x+j);
	cout<<x[0];
	for(int i=1;i<j;i++){
		cout<<"+"<<x[i];
	}
	cout<<endl;
	return 0;
}

