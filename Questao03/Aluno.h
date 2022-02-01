#include"Pessoa.h"

#pragma once
class Aluno : public Pessoa
{
private:
	string matricula;
	string curso;
public:
	void cadastrarDados();
	void imprimirDados();
};

