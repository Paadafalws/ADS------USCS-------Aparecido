#include <stdio.h>
int fibona(int);
int main (){

	int n= 10;
	printf("ffibona de %d = %d",n,fibona(n));
}
int fibona (int n){
	if (n<=1)
		return n;
	else
		return  (fibona (n-1)+fibona(n-2));
}