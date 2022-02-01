#include<vector>
#include"Aluno.h"
#include"Professor.h"

#pragma once
class SistemaAcademico
{
private:
	vector<Aluno*> alunos;
	vector<Professor*> professores;
public:
	void menu();

	void incluirAluno();
	void excluirAluno();
	void listarAlunos();

	void incluirProfessor();
	void excluirProfessor();
	void listarProfessores();
};

