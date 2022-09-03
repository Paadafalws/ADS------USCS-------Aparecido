#include<stdio.h>
#include<conio.h>
//------------------
void printmsg(void); // primeiro precisa delcar um metodo antes do main para poder utiliazar
//------------------
int main(void)
{
  printf("\n********************");
  printf("\nHello WORDL ");
  printmsg();	
  printf("\n FiM ");
  return 0;
}
void printmsg(void){
	printf("\n A criaçao do metodo >>> FICA AKI <<< .");// eu criei o metodo e esta retornando para o MAIN
}