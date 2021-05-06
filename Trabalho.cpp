// Trabalho.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Empresa.h"
#include "Time.h"
#include "Jogador.h"

int main()
{
	//Jogador a("Alberto", "Brasileiro", "Proficional", 300.00, 15, 5, 1980);
	//a.imprime();
	Empresa bla("dois irmaos");
	Time va("Vasco");
	va.adicionaJogador("Alberto", "Brasileiro", "Proficional", 300.00, 15, 5, 1980);
	va.adicionaJogador("Godofredo", "Brasileiro", "Base", 3000.00, 15, 5, 2001);
	bla.adicionarTime("Vasco");
	bla.adicionarJogador("alfredo");
	
	//va.ImprimeTime();

	//Time a("i");
	//adicionaJogador("Godofredo", "Brasileiro", "Base", 3000.00, 15, 5, 2001);

	bla.relatorioFinanceiro("Vasco");


}


//(string nome, string nacionalidade, string categoria, float salario_bruto, int dia, int mes, int ano)