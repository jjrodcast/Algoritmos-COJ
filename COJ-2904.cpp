#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int n, may = 0, x;
	char nums[606][801];
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		char t[600];
		scanf("%s", &t);
		strcpy(nums[i], t);
		x = strlen(t);
		if(x > may) may = x; 
	}
	//fixing numbers with same length
	for(int i=0; i<n; i++){
		int len = strlen(nums[i]);
		if(may > len){
			string s = "";
			for(int k=0; k<(may - len); k++){
				s+="0";
			}
			s+=nums[i];
			strcpy(nums[i], s.c_str());	
		}
	}
	/*
	for(int i=0; i<n; i++){
		printf("%s\n", nums[i]);
	}
	*/
	//suming big numbers 
	int carry = 0, sum;
	string sumTotal = "";
	for(int j=may-1; j>=0; j--){
		sum = 0;
		for(int i=0; i<n; i++){
			sum += (int)(nums[i][j]-'0');
		}
		sum += carry;
		carry = 0;
		if(sum > 9) carry = sum/10;
		sumTotal +=(char)((sum%10) + '0');
	}
	if(carry > 0){
		while(carry > 0){
			int mod = carry % 10;
			carry /= 10;
			sumTotal +=(char)(mod + '0');
		}
	} 
	
	reverse(sumTotal.begin(), sumTotal.end());
	printf("%s\n", sumTotal.c_str());
	/* Method with no leading zeros
	bool zero = false;
	for(int i = 0; i < sumTotal.size(); i++){
		if(sumTotal[i]>='0' && sumTotal[i]<='9' && zero) {
			printf("%c", sumTotal[i]);
		}else{
			if(sumTotal[i] != '0' && !zero){
				printf("%c", sumTotal[i]);
				zero = true;
			} 
		} 
	}
	printf("\n");	
	*/
	return 0;
}
