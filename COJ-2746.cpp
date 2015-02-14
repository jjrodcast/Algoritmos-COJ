#include <bits/stdc++.h>

using namespace std;

bool isVowel(char func)
{
  if(func =='A')
           return 1;
  if(func =='E')
           return 1;
  if(func =='I')
           return 1;
  if(func =='O')
           return 1;
  if(func =='U')
           return 1;
  else
          return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	char p[1002];
	gets(p);
	int len = strlen(p);
	int vocal,cons;
	vocal = cons = 0;
	for(int i=0; i<len; i++){
		if(isVowel(p[i])) vocal++;
		if(p[i]>= 'A' && p[i]<='Z' && !isVowel(p[i])) cons++;
	}
	printf("%d %d\n", vocal, cons);
}
