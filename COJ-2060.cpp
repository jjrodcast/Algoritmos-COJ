#include <iostream>

using namespace std;

int main(){
	int n, aux;
	
	while(cin >> n){
		if(n == -1) break;
		int sum = 0, sol = 0;
		for(int i = 0; i < n; i++){
			cin >> aux;
			sum += aux;
			if(!(sum % 100)) sol++;
		}
		cout << sol << "\n";
		
		
	}
	
	return 0;
}
