#pragma once
#include "Data.h"
#include <iostream>
using namespace std;
class Jogador
{
public:
	static int ID;
	Jogador(string nome, string nacionalidade, string categoria, float salario_bruto);

	void setNome(string nome);

	void setNacionalidade(string nacionalidade);
	void setSalarioBruto(float salario_bruto);
	void setCategoria(string categoria);

	void getIdade(int idade);
	void getAposentar(int tempoRestante);
	void getCalcularSalario(float salario_liquido);
	int geraID();

private:
	
	string nome;
	string nacionalidade;
	string categoria;
	float salario_bruto;
	float salario_liquido;

};

