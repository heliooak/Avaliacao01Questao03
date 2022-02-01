#include "Pessoa.h"

void Pessoa::cadastrarDados()
{
	cout << "Informe o nome: " << endl;
	cin >> nome;
	cout << "Informe o CPF: " << endl;
	cin >> cpf;
	cout << "Informe o ano de nascimento: " << endl;
	cin >> anoNascimento;
}

void Pessoa::imprimirDados()
{
	cout << "Nome: " << nome << endl;
	cout << "CPF: " << cpf << endl;
	cout << "Ano de nascimento: " << anoNascimento << endl;
}
