#include <iostream>
#include <stdio.h>
#include <math.h>
#define T 1440
using namespace std;

int main() {
	int h1,m1,h2,m2;
	while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2) == 4){
		if(!h1 && !m1 && !h2 && !m2) break;
		//convertimos ambas horas a minutos
		int current = (h1*60) + m1;
		int wakeUp = (h2*60) + m2;
		//verificamos si son del mismo dia o no
		if(wakeUp < current) wakeUp+=(T);
		cout<<wakeUp-current<<endl;
	}
	return 0;
}

