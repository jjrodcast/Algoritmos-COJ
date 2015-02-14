#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string.h>
#define LIM 50

using namespace std;

int main(){
    char A[LIM], B[LIM];
    scanf("%s %s", &A, &B);
    int n = strlen(A);
    int m = strlen(B);
    for(int i=0; i<m; i++){
        A[n] = B[i];
        n++;
    }
    A[n] = '\0';
    //printf("%s\n", A);
    bool band = true;
    for(int i=0; i<n/2; i++){
        if(A[i] != A[n-1-i]) {
            band = false;
            break;
        }
    }
    (band)? puts("Yes"):puts("No");
    return 0;
}
