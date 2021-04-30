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
	Time(string nome, string categoria);
	int static ID;
	void setCategoria(string categoria);
	void setNome(string nome);
	void adicionaJogador(int ID);
	int geraID();
	void geraRelatorioGeral();
	void geraRelatorioFinanceiro();

private:
	string nome;
	string categoria;
	vector <int> Jogadores;
};
#endif
