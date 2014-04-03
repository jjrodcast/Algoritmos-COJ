#include <iostream> 
#include <cstdio> 
#include <algorithm> 
#include <cstdlib> 
#include <cmath> 
using namespace std; 
int main()
{   int n,sw; 
    int r,a; 
    string word; 
    scanf("%d",&n); 
    getchar(); 
    while(n--){ 
      sw=1; 
      r=a=0; 
      while(sw){ 
         getline(cin, word); 
         if(word.length() == 0) break; 
         for (int i = 0; i < word.length(); i++){ 
             if(word[i]!='#') r+=1; 
             a+=1; 
         } 
    } 
       if ((r*100 % a) == 0)  printf("Efficiency ratio is %d%%.\n",(r*100)/a);     
       else{ 
         int cab = r*1000/a; 
         if (r*1000 % a >= (a+1)/2) cab++; 
         if (cab % 10 == 0) printf("Efficiency ratio is %d%%.\n", cab/10); 
         else printf("Efficiency ratio is %d.%d%%.\n", cab/10, cab%10); 
       } 
    } 
    return 0; 
} 

