

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
	int getID();
	int getINSS();
	int getIR();
	string getNome();
	string getCategoria();
	

private:
	int ID;
	int static UltimoID;
	float SalarioTotal;
	float INSS;
	float IR;
	int numeroJogadores;
	string nome;
	string categoria;
	vector <Jogador> Jogadores;
};
#endif
