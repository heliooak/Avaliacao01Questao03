#pragma once

#include<string>
#include<iostream>

using namespace std;

class Pessoa
{
private:
	string nome;
	string cpf;
	int anoNascimento;
public:
	void cadastrarDados();
	void imprimirDados();
};

