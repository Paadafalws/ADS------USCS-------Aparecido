#include<stdio.h>
#include<conio.h>
int main(void)
{
	float X, Y, Z, Resultado1;
  printf("\n Calcular Multiplica, soma , susbtraçao, e divisao**");
  printf("\n Informe Nota2");
  scanf("%f",&X);
  printf("\n Informe Nota1 ");
  scanf("%f",&Y);
  printf("\n Informe Nota3 ");
  scanf("%f",&Z);
  Resultado1 = (X + Z + Y)/3;
  printf("\n Resultado = %f ",Resultado1);
  return 0;

}