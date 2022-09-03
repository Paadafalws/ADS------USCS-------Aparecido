#include<stdio.h>
#include<conio.h>
int main(void)
{
	int Base, Altura, Resultado;
  printf("\n Calcular A area de um triangulo*******");
  printf("\n Informe a Base : ");
  scanf("%d",&Base);
  printf("\n Informe a Altura :");
  scanf("%d",&Altura);
  Resultado = (Altura * Base)/2;
  printf("\n Resultado = %d ",Resultado);
  return 0;

}