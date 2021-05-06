// Trabalho.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Empresa.h"
#include "Time.h"
#include "Jogador.h"

int main()
{

	Empresa bla("dois irmaos");
	Time va("Vasco");
	Time Ib("Ibis");
	va.adicionaJogador("Alberto", "Brasileiro", "Proficional", 300.00, 15, 5, 1980);
	va.adicionaJogador("Godofredo", "Brasileiro", "Base", 1500.00, 15, 5, 2001);
	va.adicionaJogador("Tom", "Argentino", "Proficional", 4100.00, 18, 1, 1985);
	Ib.adicionaJogador("Dario", "Romeno", "Proficional", 2500.00, 1, 8, 2000);
	Ib.adicionaJogador("Creuse", "Brasileiro", "Proficional", 300.00, 25, 3, 1995);
	va.adicionaJogador("Strarovisc", "Russo", "Base", 800.00, 3, 4, 2003);
	bla.adicionarTime("Vasco");
	//bla.adicionarJogador("alberto","Portugues","Base",600.00,7,8,2006);
	bla.listaJogador();

	//Ib.geraRelatorioFinanceiro();
	//va.geraRelatorioFinanceiro();

	


}


//(string nome, string nacionalidade, string categoria, float salario_bruto, int dia, int mes, int ano)