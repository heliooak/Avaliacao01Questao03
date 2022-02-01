#include "Professor.h"

void Professor::cadastrarDados()
{
	Pessoa::cadastrarDados();
	cout << "Informe o ano de contratacao: " << endl;
	cin >> anoContratacao;
}

void Professor::imprimiriDados()
{
	Pessoa::imprimirDados();
	cout << "Ano de contratacao: " << anoContratacao;
}
