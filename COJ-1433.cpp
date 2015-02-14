#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	char pal[10000];
	int n;
	while(scanf("%d", &n) && n){
		scanf("%s", &pal);
		int k=0;
		bool band;
		for(int i=0; i<n; i++){
			k++;
			band = false;
			for(int j=i; j<strlen(pal); j+=n){
				if(!band) {
					printf("%c", pal[j]);
					band = true;
				}else{
					printf("%c", pal[j+n-k-i]);
					band = 0;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
