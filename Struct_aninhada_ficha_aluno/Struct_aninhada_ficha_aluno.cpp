//Programa Ficha do Aluno

//Declaração de Biblioteca
#include <stdio.h> //Funções I/O

int main(void){
	
	typedef struct{
		
		int dia;
		int mes;
		int ano;
	}data;
	
	typedef struct{
		
		char rua[30];
		int numero;
		char bairro[30];
		char cidade[30];
		char estado[2];
		int cep;
	}endereco;
	
	struct ficha_aluno{
		
		int matricula;
		char nome[50];
		char disciplina[30];
		float nota;
		
		data data_nasc;
		endereco end_aluno;
	};
	
	//Declaração da variavel aluno do tipo struct ficha_aluno
	struct ficha_aluno aluno[2];
	
	int i;
	
	printf("\n Ficha do Aluno \n");
	
		for(i=0; i<2; i++){
		
			printf("Matricula do aluno: ");
			scanf("%d", &aluno[i].matricula);
		
			printf("Nome do aluno: ");
			scanf("%s", &aluno[i].nome);
			
			printf("Informe o endereço do aluno (Rua): ");
			scanf("%s", &aluno[i].end_aluno.rua);
			
			printf("Informe o endereço do aluno (Numero): ");
			scanf("%d", &aluno[i].end_aluno.numero);
			
			printf("Informe o endereço do aluno (Bairro): ");
			scanf("%s", &aluno[i].end_aluno.bairro);
			
			printf("Informe o endereço do aluno (Cidade): ");
			scanf("%s", &aluno[i].end_aluno.cidade);
			
			printf("Informe o endereço do aluno (Estado): ");
			scanf("%s", &aluno[i].end_aluno.estado);
			
			printf("Informe o endereço do aluno (CEP): ");
			scanf("%d", &aluno[i].end_aluno.cep);
			
			printf("Informe a data de nascimento do aluno (Dia): ");
			scanf("%d", &aluno[i].data_nasc.dia);
			
			printf("Informe a data de nascimento do aluno (Mes): ");
			scanf("%d", &aluno[i].data_nasc.mes);
			
			printf("Informe a data de nascimento do aluno (Ano): ");
			scanf("%d", &aluno[i].data_nasc.ano);
			
			printf("Disciplina do aluno: ");
			scanf("%s", &aluno[i].disciplina);
			
			printf("Informe a nota do aluno: ");
			scanf("%f", &aluno[i].nota);
		}
		
		for(i=0; i<2; i++){
			
			printf("\n Ficha do Aluno \n");
			printf("Matricula: %d\n", aluno[i].matricula);
			printf("Nome: %s\n", aluno[i].nome);
			printf("Endereço: %s,%d,Bairro %s, Cidade %s, CEP:%d\n", aluno[i].end_aluno.rua, aluno[i].end_aluno.numero, aluno[i].end_aluno.bairro, aluno[i].end_aluno.cidade, aluno[i].end_aluno.cep);
			printf("Data de nascimento: %d/%d/%d\n", aluno[i].data_nasc.dia, aluno[i].data_nasc.mes, aluno[i].data_nasc.ano);
			printf("Disciplina: %s\n", aluno[i].disciplina);
			printf("Nota: %.2f\n\n", aluno[i].nota);
		}
		
		return(0);
	
	
	
	
	
	
	
	
	
	
	
		
}
