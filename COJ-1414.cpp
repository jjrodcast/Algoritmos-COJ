#include <iostream>
#include <string.h>
#include <stdio.h>
#include <queue>
using namespace std;

int dx[]={1,1,-1,-1,2,2,-2,-2};
int dy[]={2,-2,2,-2,1,-1,1,-1};

struct Punto
{
	int x;
	int y;
	int costo;
	Punto(int _x, int _y, int _costo){
		x = _x;
		y = _y;
		costo = _costo;
	}
};


int bfs(int posi1, int posj1, int posi2, int posj2)
{
	queue<Punto> Q;
	Q.push(Punto(posi1,posj1,0));
	
	while(!Q.empty()){
		Punto p = Q.front(); Q.pop();
		
		if(p.x==posi2 && p.y==posj2) return p.costo;
		for(int i=0; i<8; i++){
			int X,Y;
			X = p.x + dx[i];
			Y = p.y + dy[i];
			if(X>=1 && Y>=1 && X<=8 && Y<=8){
				Q.push(Punto(X,Y,p.costo+1));
			}
		}
	}
}

int main() {
	string s1,s2;
	while(cin>>s1>>s2){
		if(s1=="##" && s2=="##") break;
		int x1,y1,x2,y2;
		x1 = s1[0]-'a'+1;
		y1 = s1[1]-'0';
		x2 = s2[0]-'a'+1;
		y2 = s2[1]-'0';
		cout<<"To get from "<< s1 <<" to "<< s2 <<" takes "<<bfs(x1,y1,x2,y2)<<" knight moves."<<endl;
	}
	return 0;
}

