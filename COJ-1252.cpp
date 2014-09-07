#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>

using namespace std;

char cad[100000];

int main() {
	while(gets(cad)){
		if(cad[0]=='#') break;
		int n = strlen(cad);
		for(int i=0;i<n;i++){
			if(cad[i]==' ') cout<<"%20";
			else if(cad[i]=='!') cout<<"%21";
			else if(cad[i]=='$') cout<<"%24";
			else if(cad[i]=='%') cout<<"%25";
			else if(cad[i]=='(') cout<<"%28";
			else if(cad[i]==')') cout<<"%29";
			else if(cad[i]=='*') cout<<"%2a";
			else cout<<cad[i];
		}
		cout<<endl;
	}
	return 0;
}
