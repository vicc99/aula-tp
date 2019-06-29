#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int n1, n2, i, modo;
//1º Ler 2 números e exibir todos os números de dentro do intervalo.
		printf("Digite o primeiro numero: ");
			scanf("%d",&n1);
		printf("Digite o segundo numero: ");
			scanf("%d",&n2);
// Perguntar a forma de exibir os números
		printf("Como voce deseja exibir os itens? \n\n Digite 1 para exibir em ORDEM CRESCENTE. Digite -1 para exibir em ORDEM DECRESCENTE. \n");
		scanf("%d",&modo);
// SE o usuário escolheu o modo 1 CRESCENTE
		if(modo==1)
{
	if (n1 <= n2)
{
	
		while ( i <= n2 )
{
			printf("\n %d",i);i = i + 1;
}
}
	else
{			
	i = n2;
	while ( i <= n1 )
{
		printf("\n %d",i);
			i = i + 1;
}
}
}
// SE o usuário escolheu o modo -1 DECRESCENTE
		else if(modo==-1)
{
		if (n1 >= n2)	
{
// VERIFICA QUAL DOS DOIS NÚMEROS É O MAIOR/MENOR E INICIA A CONTAGEM A PARTIR DELE//N1 É MAIOR QUE N2
		i = n1;
			while ( i >= n2 )
{
				printf("\n %d",i);
				i = i - 1;
}
}
		else
{
// VERIFICA QUAL DOS DOIS NÚMEROS É O MAIOR/MENOR E INICIA A CONTAGEM A PARTIR DELE
//N2 É MAIOR QUE N1
		i = n2;
		while ( i >= n1 )
{
			printf("\n %d",i);
			i = i - 1;
//system("pause");
}
}
}
}
