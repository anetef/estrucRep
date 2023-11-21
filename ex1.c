#include<stdio.h>

main(){

	int idade = 0,capacidade = 100, opniao, count_otimo, count_bom, count_regular, count_ruim, count_pessimo;
	int media_idade_ruim = 0, idade_maior_pessimo, idade_maior_otimo, idade_maior_ruim;
	int quantidade, percentagem_pessimo, percentual;

	printf("digite sua idade:\n");
	scanf("%d", &idade);
	printf("qual a sua opnião sobre o filme?\n");
	scanf("%d", &opniao);

	switch (opniao)
	{
	case 'A':
		printf("otimo\n");
		break;
	case 'B':
		printf("bom\n");
		break;
	case 'C':
		printf("regular\n");
		break;
	case 'D':
		printf("ruim\n");
	case 'E':
		printf("pessimo\n");
		break;
	}

	/*a diferença percentual entre respostas bom e regular;*/
	percentual = (count_bom - count_regular);

	/*a percentagem de respostas péssimo e a maior idade que utilizou esta opção;*/
	percentagem_pessimo = count_pessimo / quantidade * capacidade;

	/*a quantidade de respostas ótimo*/
	printf("A - a quantidade de entrevistados que optaram por otimo é:\n", count_otimo);

	/*a diferença percentual entre respostas bom e regular;*/
	printf("a diferença percentual entre respostas bom e regular: \n", percentual / quantidade * capacidade);

	/*a média de idade das pessoas que responderam ruim;*/
	if (count_ruim != 0)
	{
		media_idade_ruim = idade_maior_ruim / count_ruim;
		printf("a média de idade das pessoas que responderam ruim: %.2d.", media_idade_ruim);
	}
	else
	{
		printf("ninguem optou pela resposta 'RUIM'.");
	}

	printf("\na maior idade que respondeu pessimo foi: ", idade_maior_pessimo);
	printf("\na percentagem dos entrevistados que responderam Péssimo foi: %.2d\n", percentagem_pessimo);
	printf("\noptaram por Otimo: ", count_otimo);
	printf("\noptaram por Bom: ", count_bom);
	printf("\noptaram por Regular: ", count_regular);
	printf("\noptaram por Ruim: ", count_ruim);
	printf("\noptaram por Pessimo: ", count_pessimo);
}