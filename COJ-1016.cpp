#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#define MAX 1002
#define quad(a) ((a)*(a))
using namespace std;

int padre[MAX];

int MakeSet(int n){
	for (int i = 0; i < n; i++) padre[i]=i;
}

int Find(int x){	
	if (x == padre[x])return padre[x];
	else return padre[x] = Find(padre[x]);
}

void Union(int x, int y){	
	int xRoot = Find(x);
	int yRoot = Find(y); 
	padre[xRoot] = yRoot; 
}

bool SameComponent(int x, int y){
	if(Find(x) == Find(y)) return true;
	else return false;
}

double Square(double x1, double y1, double x2, double y2){
	return sqrt(quad(x1-x2)+quad(y1-y2));
}

struct Edge {
	int u,v;
	double w;
	Edge(){}
	bool operator<(const Edge &e)const{
		return w < e.w;
	}
};

Edge edges[MAX];

double Kruskal(int n)
{
	double MST = 0; //minimun spanning tree
	int d = 0;
	for (int i = 0; i < n && d<n-1; ++i){
		if(!SameComponent(edges[i].u, edges[i].v)){
 		    Union(edges[i].u, edges[i].v);
 		    MST += edges[i].w;
 		    d++;
		}
	}
	return MST;
}

int main()
{	
    int n;
    double point[MAX][2]; // para almacenar los puntos
	cin>>n;
	for (int i = 0; i < n; i++)
	{
	    cin>>point[i][0]>>point[i][1];
	}
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
	    {
	   		edges[index].u = i;
	   		edges[index].v = j;
	   		edges[index].w = Square(point[i][0],point[i][1],point[j][0],point[j][1]);
 	   		index++;
 	   	}
     }
     sort(edges, edges + n);

     MakeSet(n);

	 //LA IDEA DEL EJERCICIO ES ENCONTRAR EL ARBOL DE EXPASION MINIMA
	 //APLICAREMOS EL ALGORITMO DE KRUSKAL
     printf("%.2lf\n", Kruskal(n));
	 //if (t) printf("\n");
	//system("pause");
	return 0;
}

/*
#include<cstdio>
#include<cmath>
struct P {
    double x,y;
    P() {}
    P(double a, double b): x(a),y(b){}
}pts[100];
unsigned int chosen,cnum,i,pnum,visited;
double tdist,min,mindist[100],temp;
bool v[100];
double dist(P a, P b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
void prim(int k){
    v[k] = 1; visited++;
    if(visited == pnum) return;
    min = 200000000.000f;
    for(i = 0; i < pnum; i++)
        if(!v[i]){
            temp = dist(pts[i], pts[k]);
            if(temp < mindist[i]) mindist[i] = temp;
            if(mindist[i] < min) min = mindist[i], chosen = i;
        }
    tdist += min;
    prim(chosen);
}
int main(void){
    scanf("%u",&cnum);
    while(cnum--){
        scanf("%u",&pnum);
        for(visited = tdist = i = 0; i < pnum; i++) 
            scanf("%lf %lf",&pts[i].x,&pts[i].y),
            v[i] = 0, mindist[i] = 200000000.000;
        prim(0);
        printf("%.2lf\n",tdist);
        if(cnum) putchar('\n');
    }
}
*/
