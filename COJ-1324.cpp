#include <bits/stdc++.h>
#define FOR(i,n,v) for(__typeof(n) i=v; i<n; i++) 

using namespace std;

int x[9];

int main(){
	ios_base::sync_with_stdio(false);
	int sum = 0, ans1, ans2, ans3, ans4, ans5, ans6, ans7;
	scanf("%d %d %d %d %d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4], &x[5], &x[6], &x[7], &x[8]);
	sort(x, x+9);
	FOR(i1,3, 0){
		FOR(i2, 4, i1+1){
			FOR(i3, 5, i2+1){
				FOR(i4, 6, i3+1){
					FOR(i5, 7, i4+1){
						FOR(i6, 8, i5+1){
							FOR(i7, 9, i6+1){
								if(x[i1]+x[i2]+x[i3]+x[i4]+x[i5]+x[i6]+x[i7]==100){
									ans1=x[i1];
									ans2=x[i2];
									ans3=x[i3];
									ans4=x[i4];
									ans5=x[i5];
									ans6=x[i6];
									ans7=x[i7];
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", ans1, ans2, ans3, ans4, ans5, ans6, ans7);
	return 0;
}
