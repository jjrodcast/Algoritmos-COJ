#include <bits/stdc++.h>
#define MOD 1000000007
#define LIM 1000000
using namespace std;

typedef unsigned long long ULL;
ULL arr[1000001];

void memo(){
	int i;
	arr[0] = 1;
	for(i=2; i<=LIM; i++){
		arr[i-1] = (i*i)+(arr[i-2]%MOD);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	ULL n;
	memo();
	while(scanf("%llu", &n)!=EOF){
		printf("%llu\n", arr[n-1]%MOD);
	}
	return 0;
}
