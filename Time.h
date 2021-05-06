#pragma once

#ifndef Time_h
#define Time_h
#include <iostream>
#include "Jogador.h"
using namespace std;
#include <vector>

class Time
{
public:
	Time(string nome);
	

	string getJogadorNome();
	

	int getJogadorID();
	void setCategoria(string categoria);
	void setNome(string nome);
	void adicionaJogador(string nome, string nacionalidade, string categoria, float salario_bruto, int dia, int mes, int ano);
	int geraID();
	void geraRelatorioGeral();
	void geraRelatorioFinanceiro();
	void ImprimeTime();
	void Imprimi();
	int getNumeroJogadores();
	int getSalarioTotal();
	int getINSS();
	int getIR();

private:
	int static ID;
	float SalarioTotal;
	float INSS;
	float IR;
	int numeroJogadores;
	string nome;
	string categoria;
	vector <Jogador> Jogadores;
};
#endif
