#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese"); 
	int i= 20;
	int p = 30;
	int result2;
	int result;
	result = i >> 1;// A função e o deslocamento de um bit 
	// 20 = 001 0100 descolcando os bits da esquerda para direita  (>>) === 000 1010
	printf("Esse e o >> Que da esquerda para direita \n");
	printf("result = %d\n",result);
	result2 = p << 1;// a funçao do descolcamento de um bit 
	printf("Esse eo  << que da direia pra esquerda \n");
	printf("result = %d",result2);
	return 0;
}