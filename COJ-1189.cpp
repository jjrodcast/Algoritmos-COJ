#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

int main(){
	ios_base::sync_with_stdio(false);
	char num[40];
	while(scanf("%s", &num) && num[0]!='0'){
		LL sum = 0;
		int n = strlen(num), pot = n;
		for(int i = 0; i<n; i++){
			sum += (num[i]-'0')*((int)(pow(2,pot--))-1);
		}
		printf("%d\n", sum);
	}
	return 0;
}
