#include<stdio.h>
#include<conio.h>
int main(void)
{
	int C, F, Resultado;
  printf("\n Conveersao de favnith para Celsio");
  printf("\n Informe F : ");
  scanf("%d",&F);
  Resultado = ((32-F)*5)/9;
  printf(" A temperatura de Cº : %d",Resultado);

  return 0;
}
