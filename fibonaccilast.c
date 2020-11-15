#include<stdio.h>
#include<assert.h>


int fibonacci_fast(int n){
	//write your code here
       int fibonacci[n];
       fibonacci[0] = 0;
       fibonacci[1] = 1;

      for(int i = 2; i <= n; i++)
      {
         fibonacci[i] = (fibonacci[i-1] + fibonacci[i - 2]) % 10;
      }	      
	return fibonacci[n];
}

int main(){
	int n;
	scanf("%d" , &n);

    
      printf("%d",fibonacci_fast(n));
      printf("\n");
       return 0;
}
