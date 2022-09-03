#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese"); 
	int i=7, j=7;
	double x=0, y= 999.9;
	int result;
	result = !(x+3.3) +!!y +!!!i+55; // Ele nega Ex::: !0 = Verdadeiro pq ! ele inverte a formula. 
	//( negaçao ( 0 + 3.3) + (Negaçao (negaçao 999.99)) + (Negaçao (negaçao ( negaçao 7 )))+   55 
	//            0       +       1                     +    0                            +  55
	//                                             56 
	printf("\n\nresult = %d",result);
	return 0;
}