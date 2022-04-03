#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL,"portuguese"); 
	 // 1010 =10
	 // 1100 =12
	 // 1000
	int i = 10, j = 12;
	int result (i&j);
	printf("\n\nresult = %d",result);
	return 0;
}