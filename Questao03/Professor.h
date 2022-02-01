#pragma once
#include "Pessoa.h"
class Professor : public Pessoa
{
private:
	int anoContratacao;
public:
	void cadastrarDados();
	void imprimiriDados();
};

