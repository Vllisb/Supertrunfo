#include <string.h>
#include "carta.h"


int main()
{
	int c1=0,c2=0;
	printf("Insira a primeira Carta\n");
	struct carta carta1 = set_carta();	

	printf("insira a segunda carta\n");
	struct carta carta2 = set_carta();
	
	print_carta(&carta1);
	print_carta(&carta2);
/****** Testar a ideia principal aqui e depois inserir um arquivo para isolar responsabilidades *******/
	// Primeira comparação - Cidade
	if (strlen(carta1.cidade) > strlen(carta2.cidade))
	{
		printf("Cidade com maior nome: %s\n", carta1.cidade);
		c1++;

	}
	else
	{
		printf("Cidade com maior nome: %s\n", carta2.cidade);
		c2++;
	}
	
	// Segunda comparação - População
	if (carta1.populacao > carta2.populacao)
	{
		printf("Cidade com maior Populacao: %s\n", carta1.cidade);
		c1++;

	}
	else
	{
		printf("Cidade com maior População: %s\n", carta2.cidade);
		c2++;
	}		
	
	// Terceira comparação - pib
	if (carta1.pib > carta2.pib)
	{
		printf("Cidade com maior PIB: %s\n", carta1.cidade);
		c1++;

	}
	else
	{
		printf("Cidade com maior PIB: %s\n", carta2.cidade);
		c2++;
	}	
	
	// quarta  comparação - area
	if (carta1.area > carta2.area)
	{
		printf("Cidade com maior Area: %s\n", carta1.cidade);
		c1++;

	}
	else
	{
		printf("Cidade com maior Area: %s\n", carta2.cidade);
		c2++;
	}	
		
	// Quinta comparação - pontosTuristicos
	if (carta1.pontosTuristicos > carta2.pontosTuristicos)
	{
		printf("Cidade com maior Pontos turisticos: %s\n", carta1.cidade);
		c1++;

	}
	else
	{
		printf("Cidade com maior Pontos turisticos: %s\n", carta2.cidade);
		c2++;
	}	
		
	// Sexta  comparação - densidadePopulaciona
	if (carta1.densidadePopulacional > carta2.densidadePopulacional)
	{
		printf("Cidade com maior Densidade Populacional: %s\n", carta1.cidade);
		c1++;

	}
	else
	{
		printf("Cidade com maior Densidade Populacional: %s\n", carta2.cidade);
		c2++;
	}	
	
	// Setima  comparação - PIB per Capta
	if (carta1.pibPerCapita > carta2.pibPerCapita)
	{
		printf("Cidade com maior PIB per Capita: %s\n", carta1.cidade);
		c1++;

	}
	else
	{
		printf("Cidade com maior PiB per Capita: %s\n", carta2.cidade);
		c2++;
		
	}
	
	
	if (c1>c2)
		printf("A cidade de %s e a vencedora com %i atributos maiores\n",carta1.cidade,c1);
	if (c2>c1)
		printf("A cidade de %s e a vencedora com %i atributos maiores\n",carta2.cidade,c2);
	if (c1==c2)
		printf("A cidade de %s empatou com a cidade de $s\n",carta1.cidade,carta2.cidade);
		
	return 1;
}
