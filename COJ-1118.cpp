#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		bool x[101];
		memset(x, true, sizeof (x));
		for(int i=2; i<=n; i++){
			for(int j=i; j<=n; j+=i){
				if(x[j]==true) x[j] = false;
				else x[j] = true;
			}
		}
		int cont = 0;
		for(int i=1; i<=n; i++){
			if(x[i] == true) cont++;
		}
		printf("%d\n", cont);
	}
	return 0;
}
