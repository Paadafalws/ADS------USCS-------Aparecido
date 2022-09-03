#include<stdio.h>
#include<conio.h>
int main(void)
{
	int X, Y, Resultado;
  printf("\n Calcular QUEM E O MAIOR ? X OU Y*");
  printf("\n Informe X : ");
  scanf("%d",&X);
  printf("\n Informe Y:");
  scanf("%d",&Y);
  if( X>Y)
  {
  	printf("%d",X);
  }
  else
  {
  	printf("%d",Y);
  }
  return 0;
}
