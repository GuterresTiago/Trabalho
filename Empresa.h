#pragma once
#ifndef Empresa_h
#define Empresa_h
#include <iostream>
#include "Time.h"
#include "Jogador.h"
using namespace std;
#include <vector>

class Empresa
{
public:
    Empresa(string nome, int CNPJ);
    
    void adicionarTime();
    void consultaJogador(string nome, int ID);
    void listaJogador(string nome, int ID);
    void relatorioFinanceiro(int ID);
    void setNome(string nome);
    void setCNPJ(int CNPJ);
    int geraID();
    //float somaSalarios();

private:
    int static ID;
    int CNPJ;
    string nome;
    string categoria;
    vector <Jogador> Jogadores;
    vector <Time> Times;
    float totalSalarios;
};
#endif

