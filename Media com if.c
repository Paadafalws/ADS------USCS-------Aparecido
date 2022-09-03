#include <stdio.h> 
/* Programa Média Aritmética*/ 
main() 
{ 
float n1, n2, n3,media; 
printf("Digite o primeiro valor: "); 
scanf("%f",&n1); 
printf("Digite o segundo valor: "); 
scanf("%f",&n2); 
printf("Digite o terceiro valor: "); 
scanf("%f",&n3); 
media=(n1+n2+n3)/3; 
printf("A Média Aritmética das notas é %2. 2f \n",media); 
if ( media>=7.0) 
{ 
printf("\nO Aluno foi aprovado !\n"); 
} 
else{ 
if ( media<4.0) 
{ 
printf("\nO Aluno foi reprovad o!\n"); 
} 
if ( (media>=4.0) && (media<=6.9)) 
{ 
printf("\nO Aluno esta em exam e!\n"); 
} 
} 
}