#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#define MAX 1001
#define LIM (int)1e5+1
#define pb push_back

using namespace std;

vector<int> ady[LIM];
int dp[MAX][MAX];

void init(){
	memset(dp, -1, sizeof(dp));
	for(int i = 0; i < LIM; i++){
		if(ady[i].size() > 0) ady[i].clear();
	}
}


int DP(int i, int j){
	if(i == j) return 0;
	if(i == 0) return 1;
	if(dp[i][j] != -1) return dp[i][j];
	
	int sol = 0;

	for(int k = ady[j].size()-1; k >= 0; k--){
		if( DP(min(i, ady[j][k]), max(i, ady[j][k])) ) {
			sol = 1;
			break;	
		}
	}
	dp[i][j] = sol;
	return sol;
}

int main(){
	int C, P, U, V;
	while(cin >> C >> P){
		init();
		for(int i = 0; i < P; i++){
			cin >> U >> V;
			U--; V--;
			ady[max(U,V)].pb(min(U,V));
		}

		int sol = 0;
		for(int i = 1; i < C; i++) {
			for(int j = i+1; j < C; j++ ){
				sol += DP(i, j);
			}
		}
		
		for(int i = 0; i < 4; i ++){
			for(int j = 0; j < 4; j++){
				cout << dp[i][j] << "\t";
			}
			cout << "\n";
		}
		
		cout << sol + C - 1 << "\n";		
	}
	return 0;
}
