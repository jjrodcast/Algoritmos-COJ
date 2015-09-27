#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		double n;
		int total = 0;
		int m[51];
		int p[51];
		cin >> n;
		for(int i = 0; i < n; i++){	
			cin >> m[i]; 
			total += m[i]; 
		}
		for(int i = 0; i <n; i++){
			cin >> p[i];
			total += p[i];
		}
		total  = total / n;
		int sol = 0;
		for(int i = 0; i < n; i++){
			if(m[i]+p[i] < total) sol++;
		}
		cout << sol << "\n";
	}
    return 0;
}
