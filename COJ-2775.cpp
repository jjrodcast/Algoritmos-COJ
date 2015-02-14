#include <iostream>
#include <string.h>
#include <cstring>
#include <stdio.h>
using namespace std;

bool isVowel(string s)
{
	if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u' )
		return true;
	else return false;
}

int main() {
	int n;
	string s,r;
	cin>>n;
	while(n--){
		cin>>s;
		if(isVowel(s)){
			s+="cow";
			cout<<s<<endl;
		}
		else{
			r = s.substr(1, s.size());
			cout<<r+s[0]+"ow"<<endl;
		}
		
	}
	return 0;
}


