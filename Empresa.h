#pragma once
#ifndef Empresa_h
#define Empresa_h
#include <iostream>
#include "Time.h"
//#include "Jogador.h"
using namespace std;
//#include <vector>

class Empresa
{
public:
    Empresa(string nome);
    
    void addJogador(string nome, string nacionalidade, string categoria, float salario_bruto, int dia, int mes, int ano);
    int getTime(string nome);
    void adicionarTime(string nome);
    void consultaJogador(string nome, int ID);
    void listaJogador();
    void relatorioFinanceiro();
    void setNome(string nome);

private:
  
    string nome;
    vector <Jogador> Jogadores;
    vector <Time> Times;
    float totalSalarios;
};
#endif

