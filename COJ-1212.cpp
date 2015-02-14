#include <bits/stdc++.h>
#define MAX 201

using namespace std;

double x[90];

int main(){
	ios_base::sync_with_stdio(false);
	x[87] = 1.0; x[72] = 0.5; x[81] = 0.25; 
	x[69] = 0.125; x[83] = 0.0625; x[84] = 0.03125;	x[88] = 0.015625;
    char notes[MAX];
    while(scanf("%s", &notes) && notes[0]!='*'){
    	int n = strlen(notes);
    	double sum = 0.0; 	int cont = 0;
		for(int i=1; i<n; i++){
			if(notes[i] != (char)47){
				sum += x[notes[i]];
			}
			else{
				if(sum == 1){
					cont++;
				}
				sum = 0.0;
			} 
		}
		printf("%d\n", cont);
    }
	return 0;
}
