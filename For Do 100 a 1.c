#include<stdio.h> /*Arquivo de cabeçalho que contém as funções printf() e scanf() */
#include<locale.h> /*Arquivo de cabeçalho que contém a função setlocale que serve para mostrar na tela os caracteres da língua Portuguesa como á, â ,ç,etc. */
int main()
{

int num;

setlocale(LC_ALL,"Portuguese");
printf("\n\t Imprimir os números de 1 até 100 : \n"); 
for(num=100;num>=0;num--)
     {
      printf(" %d\n",num);
     }
return 0;
}