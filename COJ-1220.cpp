#include <iostream>
#include <cstdlib>
#include <stack>
#include <vector>
#include <limits>
#include <string.h>
#define MAX 1000

using namespace std;

vector<int> ady[MAX]; //lista de adyacencia
vector<int> components[MAX]; //lista de conjunto de componentes de cada SCC
stack<int> S;         //pila de componentes que pertenecen a un SCC
bool visited[MAX];    //arreglo de componentes visitadas
int lowLink[MAX];     //arreglo de indice menor de enlace
int cont;            //cantidad de componentes fuertemente conectadas 
int level , num;            //nivel del indice de la componente
int V, E;

void clean()
{    num = 0;     //indice de la componente de SCC
     cont = 0;  //iniciar a 0 la cantidad de SCC
     level = 0; //nivel inicial de busqueda de SCC 0 
     memset(visited,false, sizeof(visited));
     while(!S.empty()) S.pop();
     for(int i=0;i<V; i++) {
       components[i].clear();
     }
}

void dfs(int u)
{     lowLink[u] = level++;   
      visited[u] = true; 
      S.push(u);
      bool isRoot = true;  //indicamos que la componente es raiz de un SCC
      
      for(int v=0; v<ady[u].size(); v++){
         int w = ady[u][v];
         if(!visited[w])
            dfs(w);
         if(lowLink[u] > lowLink[w]){
            lowLink[u] = lowLink[w];
            isRoot = false;
         } 
      }
      
      if(isRoot){
         while(true){
           int x = S.top(); S.pop();
           components[num].push_back(x);
           lowLink[x] = numeric_limits<int>::max();
           if(x == u) break;
         }
         cont++;
         num++;
      }
      
}

int TarjanSCC()
{   
    clean();    //limpiamos los datos a usar
    for(int u=0; u<V; u++){
       if(!visited[u])
          dfs(u); 
    } 
}
/*
void ShowAllSCC()
{
    for(int i=0; i<num; i++){
       for(int j=components[i].size()-1; j>=0; j--){
          cout<<components[i][j]<<" ";
       }
       cout<<endl;
    }
}
*/
int main()
{   int U, W, G;
    while(cin>>V>>E){
        if(!V && !E) break;
        for(int i=0;i<V; i++)
           ady[i].clear();
        while(E--){
           cin>>U>>W>>G;
           U--; W--;
           ady[U].push_back(W);
           if(G==2)ady[W].push_back(U);
        }
        TarjanSCC();
        (cont>1)?cout<<"0":cout<<"1";
        cout<<endl;
        //ShowAllSCC();
    }
    //system("pause");
    return 0;
}
