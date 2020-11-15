#include<stdio.h>

int gcd_naive(int a, int b){
	int current_gcd = 1;
	for (int d = 2; d <= a && d <= b; d++){
		if(a % d == 0 && b % d == 0){
			if(d > current_gcd){
				current_gcd = d;
			}
		}
	}
	return current_gcd;
}

int gcd_fast(int a, int b){
       
        //int c = a % b;	
	if (b == 0){
		return a;
	}
  return gcd_fast(b, a%b);
	
}
int main(){
	int a, b;
	scanf("%d",  &a);
	scanf("%d", &b);
	printf("%d", gcd_fast(a, b));
	printf("\n");
	return 0;
}
