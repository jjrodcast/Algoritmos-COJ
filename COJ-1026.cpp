#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#define MAX 101
#define FOR(i,n) for(__typeof (n) i=0;i<n;i++)

using namespace std;

int R,C;
int dp[101][101];
int arr[101][101];
int dx[4]={1,0,-1,0}; 
int dy[4]={0,1,0,-1};
string s;


int bfs(int i, int j)
{   if(dp[i][j]!=-1) return dp[i][j];
    int res = 0;
    for(int u = 0; u < 4; u++){
       int x = i + dx[u];
       int y = j + dy[u];
       if(x>=0 && y>=0 && x<R && y<C && arr[x][y] < arr[i][j]){
           res = max(res, 1 + bfs(x,y));
       }
    }
    return dp[i][j] = res;
}

int main()
{   int T;
    cin>>T;
    while(T--){
      cin>>s>>R>>C;
      dp[R][C], arr[R][C];
      memset(dp,-1,sizeof(dp));
      FOR(i,R){
        FOR(j,C){
           cin>>arr[i][j];
        }
      }
      int sol = 0;
      FOR(i,R){
         FOR(j,C){
            sol = max(sol, bfs(i,j));
         }
      }
      printf("%s: %d\n", s.c_str(), ++sol);      
    }
    return 0;
}
