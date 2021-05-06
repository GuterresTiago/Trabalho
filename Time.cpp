#include "Time.h"

int Time::UltimoID = 0;
Time::Time(string nome)
{
	this->nome = nome;
	this->categoria = categoria;
	this->ID = geraID();
	
}
void Time::setCategoria(string categoria)
{
	this->categoria = categoria;
}
void Time::setNome(string nome)
{
	this->nome = nome;
}
string Time::getCategoria()
{
	return categoria;
}
string Time::getNome()
{
	return nome;
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
  
	//cout << Jogadores.size();
	return  Jogadores.size();
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
	cout <<ID<< " - "<< nome << endl;
	

}

void Time::geraRelatorioFinanceiro()
{

	float totaL, totalB;
	for (int i = 0; i < Jogadores.size(); i++)
	{
		if (Jogadores[i].getAposentar() != 0)
		{
			cout << "Em atividade: " << Jogadores[i].getNome() << endl;
			cout << "Salario Bruto: " << Jogadores[i].getSalarioBruto() << endl;
			cout << "Salario Liquido: " << Jogadores[i].getCalcularSalario() << endl;
		}
		else if (Jogadores[i].getAposentar() == 0)
		{
			cout << "Aposentado: " << Jogadores[i].getNome() << endl;
			//cout << "Aposentado: " << Jogadores[i].getSalarioBruto() << endl;
			//cout << "Aposentado: " << Jogadores[i].getCalcularSalario() << endl;
		}
		cout << "\n\n\n";
	}

}

int Time::geraID()
{
	UltimoID++;
	return UltimoID;
}