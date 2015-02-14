#include <bits/stdc++.h>
#include <math.h>
#define PI 3.141592653589793
using namespace std;

/* Este es un problemita de geometría, donde nos piden hallar el perimetro
de un poligono inscrito en una circunferencia y también hallar el perimetro
de un pologino circunscrito en una circunferencia.

Nota1: Como se sabe para un poligono inscrito en una circunferencia
	   la formula es:
	    			  P = sin(180/n)*2*r*n      ; donde n = N° lados y 
	    			  								 r = radio de la circunferencia

Nota2: Como se sabe para un poligono circunscrito en una circunferencia
	   la formula es:
	   				P = tan(180/n)*2*r*n		; donde n = N° lados y 
	    			  								 r = radio de la circunferencia
*/


int main(){
	ios_base::sync_with_stdio(false);
	int t;
	double r,n;
	scanf("%d", &t);
	while(t--){
		scanf("%lf %lf", &r, &n);
		double s, rd = (180/n)*1.0; // convertimos a grados
		rd = rd*PI/180; //pasamos a radianes
		s = 2*r*n*1.0; 
		printf("%.4lf %.4lf\n", sin(rd)*s, tan(rd)*s);
	}
	return 0;
}
