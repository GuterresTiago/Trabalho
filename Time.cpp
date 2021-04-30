#include "Time.h"


Time::Time(string nome, string categoria)
{
	this->nome = nome;
	this->categoria = categoria;
	this->ID = geraID();
}

void Time::adicionaJogador(int ID)
{
	Jogadores.push_back(ID);
}


void Time::geraRelatorioGeral()
{

	cout << "nome do time: " << nome << endl;
	for (int i = 0; i < Jogadores.size(); i++)
	{
		cout << "nome do time: " << Jogadores[i] << endl;
	}
}

int Time::geraID()
{
	return ++ID;
}