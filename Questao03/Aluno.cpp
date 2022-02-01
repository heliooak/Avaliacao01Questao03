#include "Aluno.h"

void Aluno::cadastrarDados()
{
	Pessoa::cadastrarDados();
	cout << "Informe a matricula: " << endl;
	cin >> matricula;
	cout << "Informe o curso: " << endl;
	cin >> curso;
}

void Aluno::imprimirDados()
{
	Pessoa::imprimirDados();
	cout << "Matricula: " << matricula << endl;
	cout << "Curso: " << curso << endl;
}
