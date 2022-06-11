//Programa Ficha do Aluno

//Declara��o de Biblioteca
#include <stdio.h> //Fun��es I/O

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
	
	//Declara��o da variavel aluno do tipo struct ficha_aluno
	struct ficha_aluno aluno[2];
	
	int i;
	
	printf("\n Ficha do Aluno \n");
	
		for(i=0; i<2; i++){
		
			printf("Matricula do aluno: ");
			scanf("%d", &aluno[i].matricula);
		
			printf("Nome do aluno: ");
			scanf("%s", &aluno[i].nome);
			
			printf("Informe o endere�o do aluno (Rua): ");
			scanf("%s", &aluno[i].end_aluno.rua);
			
			printf("Informe o endere�o do aluno (Numero): ");
			scanf("%d", &aluno[i].end_aluno.numero);
			
			printf("Informe o endere�o do aluno (Bairro): ");
			scanf("%s", &aluno[i].end_aluno.bairro);
			
			printf("Informe o endere�o do aluno (Cidade): ");
			scanf("%s", &aluno[i].end_aluno.cidade);
			
			printf("Informe o endere�o do aluno (Estado): ");
			scanf("%s", &aluno[i].end_aluno.estado);
			
			printf("Informe o endere�o do aluno (CEP): ");
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
			printf("Endere�o: %s,%d,Bairro %s, Cidade %s, CEP:%d\n", aluno[i].end_aluno.rua, aluno[i].end_aluno.numero, aluno[i].end_aluno.bairro, aluno[i].end_aluno.cidade, aluno[i].end_aluno.cep);
			printf("Data de nascimento: %d/%d/%d\n", aluno[i].data_nasc.dia, aluno[i].data_nasc.mes, aluno[i].data_nasc.ano);
			printf("Disciplina: %s\n", aluno[i].disciplina);
			printf("Nota: %.2f\n\n", aluno[i].nota);
		}
		
		return(0);
	
	
	
	
	
	
	
	
	
	
	
		
}
