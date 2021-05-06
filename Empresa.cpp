#include "Empresa.h"

int Empresa::UltimoID = 0;

Empresa::Empresa(string nome)
{
    this->nome = nome;
    
    this->ID = geraID();
   // this->totalSalarios = somaSalarios();
}

void Empresa::setNome(string nome)
{
    this->nome = nome;
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
void Empresa::adicionarTime(string nome)
{
    Times.push_back(Time(nome));
}

void Empresa::adicionarJogador(string nome)
{
    Times.push_back(Time(nome));
}

void Empresa::listaJogador()
{
    for (int i = 0; i < Times.size(); i++)
    {
        cout << "test";
        Times[i].ImprimeTime();
    }
}

void Empresa::relatorioFinanceiro(string nome)
{
    float total,total2, INSS, totalIR;

    for (int i = 0; i < Times.size(); i++)
    {
        if (Times[i].getNome() == nome)
        {
            Times[i].Imprimi();
            cout << Times[i].getSalarioTotal() << "- Salario total " << endl;
            cout << Times[i].getINSS() << "- Total a pagar INSS " << endl;
            cout << Times[i].getIR() << "- Total a pagar IR " << endl;
        }
    }
}

int Empresa::geraID()
{
    UltimoID++;
    return UltimoID;
}