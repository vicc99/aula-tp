#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int n1, n2, i, modo;
//1� Ler 2 n�meros e exibir todos os n�meros de dentro do intervalo.
		printf("Digite o primeiro numero: ");
			scanf("%d",&n1);
		printf("Digite o segundo numero: ");
			scanf("%d",&n2);
// Perguntar a forma de exibir os n�meros
		printf("Como voce deseja exibir os itens? \n\n Digite 1 para exibir em ORDEM CRESCENTE. Digite -1 para exibir em ORDEM DECRESCENTE. \n");
		scanf("%d",&modo);
// SE o usu�rio escolheu o modo 1 CRESCENTE
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
// SE o usu�rio escolheu o modo -1 DECRESCENTE
		else if(modo==-1)
{
		if (n1 >= n2)	
{
// VERIFICA QUAL DOS DOIS N�MEROS � O MAIOR/MENOR E INICIA A CONTAGEM A PARTIR DELE//N1 � MAIOR QUE N2
		i = n1;
			while ( i >= n2 )
{
				printf("\n %d",i);
				i = i - 1;
}
}
		else
{
// VERIFICA QUAL DOS DOIS N�MEROS � O MAIOR/MENOR E INICIA A CONTAGEM A PARTIR DELE
//N2 � MAIOR QUE N1
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
