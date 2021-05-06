#pragma once

#include <iostream>
using namespace std;
class Jogador
{
public:
	
	Jogador(string nome, string nacionalidade, string categoria, float salario_bruto, int dia, int mes, int ano);

	void setNome(string nome);

	float getSalarioL();
	void setNacionalidade(string nacionalidade);
	void setSalarioBruto(float salario_bruto);
	void setCategoria(string categoria);
	float getINSS();
	float getIR();
	void setDia(int dia);
	void setMes(int mes);
	void setAno(int ano);

	int getID();
	string getNome();
	float getSalarioBruto();
	void imprime();
	int getIdade();
	int getAposentar();
	float getCalcularSalario();
	void setIdade(int idade);
	int geraID();
	int getDia();
	int getMes();
	int getAno();

private:
    int ID;
	static int ultimoID;
	int idade;
	int dia, mes, ano;
	string nome;
	string nacionalidade;
	string categoria;
	float salario_bruto;
	float salario_liquido;
	float INSS;
	float IR;
	int tempo_restante;

};

