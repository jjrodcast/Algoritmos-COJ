#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#define LIM 123
using namespace std;

int main() {
	int N;
	int let[LIM]={0};
	cin>>N;
	cin.ignore();
	while(N--){
		char pal[40];
		cin>>pal;
		let[pal[0]]++;
	}
	bool si=false;
	for(int i=97;i<LIM;i++){
		if(let[i]>4){
			si = true;
			break;
		}
	}
	if(!si) cout<<"PREDAJA";
	else{
		for(int i=97;i<LIM;i++){
			if(let[i]>4){
				cout<<(char)i;
			}
		}
	}
	cout<<endl;
	return 0;
}
