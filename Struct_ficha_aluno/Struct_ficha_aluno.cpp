//Programa Ficha do Aluno
//Declaração de Biblioteca
#include <stdio.h> //Funções de I/O
#include <conio.h> //Funções de manipulação de caracteres na tela
# include <stdlib.h>

int main(void) {
	
	//Declaração da struct
	struct ficha_aluno{
		
		int matricula;
		char nome[50];
		char disciplina[30];
		float nota;
	};
	
	//Declaração da variavel aluno do tipo struct ficha_aluno
	struct ficha_aluno aluno;
	
	//Função printf - impressão na tela
	//Função scanf - leitura de dados do teclado
	
	printf("\n Cadastro Ficha do Aluno \n");
	printf("-----------------------------\n");
	
	printf("Maticula do aluno: ");
	scanf("%d", &aluno.matricula);
	
	printf("Nome do Aluno: ");
	scanf("%s", &aluno.nome);
	
	printf("Disciplina do Aluno: ");
	scanf("%s", &aluno.disciplina);
	
	printf("Informe a nota do Aluno: ");
	scanf("%f", &aluno.nota);
	
	printf("\n Ficha do Aluno \n");
	printf("-----------------------------\n");
	
	printf("Matricula: %d\n", aluno.matricula);
	printf("Nome: %s\n", aluno.nome);
	printf("Disciplina: %s\n", aluno.disciplina);
	printf("Nota: %.2f\n", aluno.nota);
	
	system("pause");
	return(0);
	
	
}
