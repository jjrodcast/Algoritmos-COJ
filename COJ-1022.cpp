#include <iostream>

using namespace std;

int swaps;

void bubble(int x[], int n)
{	swaps=0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(x[i]>x[j]){
				int temp = x[j];
				x[j] = x[i];
				x[i] = temp;
				swaps++;
			}
		}
	}
}

int main() {
	int N;
	cin>>N;
	while(N--){
		int L;
		int x[51];
		cin>>L;
		for(int i=0;i<L;i++){
			cin>>x[i];
		}
		bubble(x,L);
		cout<<"Optimal train swapping takes "<<swaps<<" swaps."<<endl;
	}
	return 0;
}

