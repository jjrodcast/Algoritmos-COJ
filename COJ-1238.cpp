#include <iostream>
#include <cstdlib>
#include <string.h>
#define MAX 10

using namespace std;

const int fact[5]={1, 2, 6, 24, 120};

int main() {
	char cad[MAX];
	while(cin>>cad){
	   if(cad[0]=='0') break;
	   int len = strlen(cad);
	   int total=0;
	   int k=0;
	   for(int i=len-1;i>=0;i--){
	   	  total+=((cad[k++]-'0')*fact[i]);
	   }
	   cout<<total<<endl;
	}
	return 0;
}
