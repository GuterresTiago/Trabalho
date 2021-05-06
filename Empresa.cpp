#include "Empresa.h"

int Empresa::ID = 0;

Empresa::Empresa(string nome, int CNPJ)
{
    this->nome = nome;
    this->CNPJ = CNPJ;
    this->ID = geraID();
   // this->totalSalarios = somaSalarios();
}

void Empresa::setNome(string nome)
{
    this->nome = nome;
}

void Empresa::setCNPJ(int CNPJ)
{
    this->CNPJ = CNPJ;
}

void Empresa::consultaJogador(string nome, int ID)
{

    for (int i = 0; i < Jogadores.size(); i++)
    {
        if (Jogadores[i].getID() == ID|| Jogadores[i].getNome() == nome)
        {
            if (Times[i].getJogadorID() == Jogadores[i].getID()|| Jogadores[i].getNome() == Times[i].getJogadorNome())
            {
                Times[i].Imprimi();
                Jogadores[i].imprime();
            }
            else
            {
                cout << "Jogador sem time" << endl;
                Jogadores[i].imprime();
            }
          
        }

    }

}
void Empresa::adicionarTime()
{
    Times.push_back(Time(nome));
}

void Empresa::listaJogador(string nome, int ID)
{
    for (int i = 0; i < Jogadores.size(); i++)
    {
        Jogadores[i].imprime();
    }
}

void Empresa::relatorioFinanceiro(int ID)
{
    float total,total2, INSS, totalIR;
    for (int i = 0; i < Times.size(); i++)
    {
       
        Times[i].Imprimi();
        cout << Times[i].getSalarioTotal() << "- Salario total " << endl;
        cout << Times[i].getINSS() << "- Total a pagar INSS " << endl;
        cout << Times[i].getIR() << "- Total a pagar IR " << endl;
    }
}

int Empresa::geraID()
{
    return ++ID;
}