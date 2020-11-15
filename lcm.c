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

long long gcd_fast(int a, int b){
       
        //int c = a % b;	
	if (b == 0){
		return a;
	}
  return gcd_fast(b, a%b);
	
}
int main(){
	long long a, b;
	scanf("%lld",  &a);
	scanf("%lld", &b);
	printf("%lld",  a /gcd_fast(a, b)*b);
	printf("\n");
	return 0;
}
