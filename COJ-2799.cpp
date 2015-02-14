#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{   int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && a==c && a+b+c==180)  printf("Equilateral\n");
	else if((((a==b || a==c) && b!=c) || (b==c && a!=c)) && a+b+c==180) printf("Isosceles\n");
	else if(a!=b && b!=c && a!=c && a+b+c==180) printf("Scalene\n");
	else printf("Error\n");
	return 0;		
}
