#include<stdio.h>
#include<conio.h>
int main(void)
{
	float X, Y, Resultado;
  printf("Impressora");
  printf("\n Informe quantas impressao vai fazer : ");
  scanf("%f",&X);
  if( X>200)
  {
  	Resultado = X * 0.30;
  	printf("Resutlado : %f",Resultado);
  }
  else
  {
  	Y = X * 0.50;
  	printf(" IMpressao %f",Y);
  }
  return 0;
}
