# include <stdio.h>
typedef struct{
	float peso;
	int idade;
	float altura;
}pessoa;
void impremepessoa(pessoa P){
	printf("%.2f\n\n",P.peso);
	printf("%d\n\n",P.idade);
	
}
int main ()
{
		pessoa povo [10],p;
	povo [4].idade = 50;
	povo[4].peso=65.9;
	povo [4].altura= 1.6;
	p = povo [4];
	p.idade=p.idade+2;
	p.idade = p.peso + 5;
	impremepessoa(p);
}