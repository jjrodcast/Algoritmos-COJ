#include <bits/stdc++.h>

using namespace std;
/*
	Este problema nos pide hallar la cantidad de puntos visibles
	desde el origen (0,0).
	Solo tenemos que verificar si para un (x,y) el gcd == 1
	en ese caso sumamos 1 y asignamos al actual valor la suma
	del anterios + 2 + total_gdc's
*/

int p[1001];

int gcd(int a,int b)
{   if(a%b==0) return b;
    else return gcd(b,a%b);
}


int main(){
	ios_base::sync_with_stdio(false);
	p[0] = 0; p[1] = 3;
	for(int x = 2; x<1001; x++){
		int sum = 0;
		for(int y = 1; y<x; y++){
			if(gcd(x,y) == 1) sum++; 
		}
		p[x] = p[x-1]+2*sum; 
	}	
	int t, n;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		scanf("%d", &n);
		printf("%d %d %d\n", i, n, p[n]);
	}		
	return 0;
}
