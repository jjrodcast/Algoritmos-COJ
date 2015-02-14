#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#define pb push_back
#define MAX 10010
using namespace std;

vector<int> ady[MAX];
bool visited[MAX];

int bfs(int u)
{   int cont = 0;
    queue<int> Q;
    Q.push(u);
    visited[u] = true;
    while(!Q.empty()){
       int v  = Q.front(); Q.pop();
       for(int i=0; i<ady[v].size(); i++){
          if(!visited[ady[v][i]]){
             visited[ady[v][i]] = true;
             Q.push(ady[v][i]);
             cont++; //derribadas
          }
       }
    }
    return cont;
}

void clr()
{
     memset(visited, false, sizeof(visited));
     for(int i=0; i< MAX; i++) ady[i].clear();
}

int main()
{   int T;
    cin>>T;
    while(T--){
        clr();
        int N,M,L;
        cin>>N>>M>>L;
        while(M--){
          int x,y;
          cin>>x>>y;
          ady[x].pb(y);
        }
        int total = 0;
        while(L--){
          int z;
          cin>>z;
          if(!visited[z]) total++;
          total += bfs(z); 
        }
       cout<<total<<endl;
    }
    return 0;
}
