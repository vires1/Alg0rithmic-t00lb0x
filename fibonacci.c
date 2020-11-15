#include<stdio.h>
#include<assert.h>

int fibonacci_naive(int n){
	if(n<=1)
		return n;
	return fibonacci_naive(n-1) + fibonacci_naive(n -2);
}

int fibonacci_fast(int n){
	//write your code here
       int fibonacci[n];
       fibonacci[0] = 0;
       fibonacci[1] = 1;

      for(int i = 2; i <= n; i++)
      {
         fibonacci[i] = fibonacci[i-1] + fibonacci[i - 2];
      }	      
	return fibonacci[n];
}
void test_solution(){
	assert(fibonacci_fast(3) == 2);
	assert(fibonacci_fast(10) == 55);
	for (int n = 0; n < 20; n++)
		assert(fibonacci_fast(n) == fibonacci_naive(n));
}
int main(){
	int n;
	scanf("%d" , &n);

       //printf("%d",fibonacci_naive(n));
       //printf("\n");
       //test_solution();
      printf("%d",fibonacci_fast(n));
      printf("\n");
       return 0;
}
