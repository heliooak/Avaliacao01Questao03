#include "SistemaAcademico.h"

void SistemaAcademico::menu()
{
	int opcao = -1;
	while (opcao != 0)
	{
		cout << "-- Menu de opoes --" << endl;
		cout << "1 - Incluir aluno" << endl;
		cout << "2 - Listar alunos" << endl;
		cout << "3 - Excluir aluno" << endl;
		cout << "4 - Incluir professor" << endl;
		cout << "5 - Listar professores" << endl;
		cout << "6 - Excluir professor" << endl;
		cout << "o - Sair" << endl;
		cin >> opcao;

		switch (opcao)
		{
		case 1: incluirAluno();
			break;
		case 2: listarAlunos();
			break;
		case 3: excluirAluno();
			break;
		case 4: incluirProfessor();
			break;
		case 5: listarProfessores();
			break;
		case 6: excluirProfessor();
			break;
		}

		system("pause");
		system("cls");
	}
	cout << "Programa encerrado." << endl;
}

void SistemaAcademico::incluirAluno()
{
	Aluno* novoAluno = new Aluno();
	novoAluno->cadastrarDados();
	alunos.push_back(novoAluno);
	cout << "Aluno inserido com sucesso." << endl;
}

void SistemaAcademico::excluirAluno()
{
	listarAlunos();
	int posicao;
	cout << "Informe a posicao do aluno: " << endl;
	cin >> posicao;
	alunos.erase(alunos.begin() + posicao);
	cout << "Aluno excluido com sucesso." << endl;
}

void SistemaAcademico::listarAlunos()
{
	cout << "Relacao de alunos" << endl;
	for (int i = 0; i < alunos.size(); i++)
	{
		cout << "Posicao " << i << endl;
		alunos[i]->imprimirDados();
	}
	cout << "Fim da listagem" << endl;
}

void SistemaAcademico::incluirProfessor()
{
	Professor* novoProfessor = new Professor();
	novoProfessor->cadastrarDados();
	professores.push_back(novoProfessor);
	cout << "Professor incluido com sucesso." << endl;
}

void SistemaAcademico::excluirProfessor()
{
	listarProfessores();
	int posicao;
	cout << "Informe a posicao do professor: " << endl;
	cin >> posicao;
	professores.erase(professores.begin() + posicao);
	cout << "Professor excluido com sucesso." << endl;

}

void SistemaAcademico::listarProfessores()
{
	cout << "Relacao de professores" << endl;
	for (int i; i < professores.size(); i++)
	{
		cout << "Posicao " << i << endl;
		professores[i]->imprimirDados();
	}
	cout << "Fim da listagem" << endl;
}
