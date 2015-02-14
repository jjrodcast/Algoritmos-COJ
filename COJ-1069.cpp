#include <iostream>
using namespace std;

int main(){
	int N, i, F, C, E, LE, sodas;
	cin >> N;
	for(i=0;i<N;i++){
		cin >> E >> F >> C;
		sodas=0;
		E += F;
		LE = E;
		while(E>=C){
			sodas += E/C;
			E = E/C + E%C;
			if(E == LE){
				sodas=0;
				break;
			}
			LE = E;
		}
		cout << sodas << endl;
	}
}
