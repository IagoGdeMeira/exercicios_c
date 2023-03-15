struct provedorInternet {
	char nomeCliente[80];
	char enderecoEletronico[80];
	int planoAcesso;
	float valorMensalidade;
	char situacao;
};

int main {
	struct provedorInternet provedor1;
	
	printf("Informe o nome do cliente: ");
	scanf("%s", provedor1.nomeCliente);
	printf("Informe o endereço eletrônico do cliente: ");
	scanf("%s", provedor1.enderecoEletronico);
	printf("Informe o plano de acesso do cliente: ");
	scanf("%d", &provedor1.planoAcesso);
	printf("Informe o valor da mensalidade: ");
	scanf("%f", &provedor1.valorMensalidade);
	printf("Informe a situação de atividade: ");
	scanf("%s", &provedor1.situacao);
	
	for(int i = 1; i <= 3; i++)
		printf("\n");
	
	printf("CLIENTE: %s\n", provedor1.nomeCliente);
	printf("E-MAIL: %s\n", provedor1.enderecoEletronico);
	printf("PLANO DE ACESSO: %d\n", provedor1.planoAcesso);
	printf("MENSALIDADE: R$%.2f\n", provedor1.valorMensalidade);
	printf("SITUAÇÃO: %c\n", provedor1.situacao);
	
	return 0;
}
