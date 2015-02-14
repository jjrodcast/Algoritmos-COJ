#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
	
	int casos,aux;
	double h,d,acum=0.0;
	float pitagoras;
	cin>>casos;
	aux=casos;
	while(casos--)
	{
		cin>>h>>d;
		pitagoras=(h*h-d*d)/(2*h);
		printf("%.1f\n",pitagoras);
		acum+=pitagoras;
		//acum+= roundf(pitagoras * 10) / 10;  
	}
	printf("%.1f", acum/aux);
	return 0;
}
