#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int t;
	scanf("%d", &t);
	while(t--){
		char word[101];
		scanf("%s", &word);
		int len = strlen(word);
		if(len < 11){
			printf("%s\n", word);
		}
		else{
			printf("%c%d%c\n", word[0], len-2, word[len-1]);
		}
	}
	return 0;
}
