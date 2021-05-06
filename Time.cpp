#include "Time.h"

int Time::ID = 0;
Time::Time(string nome)
{
	this->nome = nome;
	this->categoria = categoria;
	this->ID = geraID();
	
}

void Time::adicionaJogador(string nome, string nacionalidade, string categoria, float salario_bruto, int dia, int mes, int ano)
{
	Jogadores.push_back(Jogador(nome,nacionalidade,categoria,salario_bruto,dia,mes,ano));
}

string Time::getJogadorNome()
{
	
	for (int i = 0; i < Jogadores.size(); i++)
	{
		return Jogadores[i].getNome();
	}
	
}

int Time::getINSS()
{
	for (int i = 0; i < Jogadores.size(); i++)
	{
		INSS+= Jogadores[i].getINSS();
		return INSS;
	}
}
int Time::getIR()
{
	for (int i = 0; i < Jogadores.size(); i++)
	{
		INSS += Jogadores[i].getIR();
		return IR;
	}
}
int Time::getSalarioTotal()
{
	for (int i = 0; i < Jogadores.size(); i++)
	{
		INSS += Jogadores[i].getSalarioBruto();
		return INSS;
	}
}

int Time::getNumeroJogadores()
{
	return numeroJogadores = Jogadores.size();
}

int Time::getJogadorID()
{
	for(int i = 0; i < Jogadores.size(); i++)
	{
		return Jogadores[i].getID();
	}

}

void Time::ImprimeTime()
{
	for (int i = 0; i < Jogadores.size(); i++)
	{
		Jogadores[i].imprime();
	}
}

void Time::geraRelatorioGeral()
{

	cout << "nome do time: " << nome << endl;
	for (int i = 0; i < Jogadores.size(); i++)
	{
		Jogadores[i].imprime();
		
	}
}
void Time::Imprimi()
{
	cout << nome << endl;
	cout << ID << endl;

}

void Time::geraRelatorioFinanceiro()
{

	float totaL, totalB;
	for (int i = 0; i < Jogadores.size(); i++)
	{
		if (Jogadores[i].getAposentar() != 0)
		{
			cout << "Ativo" << Jogadores[i].getSalarioBruto() << endl;
			cout << "Ativo" << Jogadores[i].getCalcularSalario() << endl;
		}
		else if (Jogadores[i].getAposentar() == 0)
		{
			cout << "Aposentado" << Jogadores[i].getSalarioBruto() << endl;
			cout << "Aposentado" << Jogadores[i].getCalcularSalario() << endl;
		}
		
	}

}

int Time::geraID()
{
	return ++ID;
}