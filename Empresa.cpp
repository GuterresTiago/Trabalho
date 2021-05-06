#include "Empresa.h"


Empresa::Empresa(string nome)
{
    this->nome = nome;
    

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
            if (Times[i].getJogadorID() == ID|| nome == Times[i].getJogadorNome())
            {
                Times[i].Imprimi();
               // Jogadores[i].imprime();
            }
            else
            {
                cout << "Jogador sem time" << endl;
               // Jogadores[i].imprime();
            }
          
        

    }

}
void Empresa::adicionarTime(string nome)
{
    Times.push_back(nome);
}

void Empresa::adicionaJogador(string nome)
{
  
    
}

void Empresa::listaJogador()
{
    for (int i = 0; i < Jogadores.size(); i++)
    {
       
        cout << Times[i].getJogadorNome() <<endl;
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

