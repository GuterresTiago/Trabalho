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

int Empresa::getTime(string nome)
{
    for (int i = 0; i < Times.size(); i++)
    {
        if (Times[i].getNome() == nome)
        {
            return Times[i].getID();
        }
    }
}


void Empresa::consultaJogador(string nome, int ID)
{



    for (int i = 0; i < Jogadores.size(); i++)
    {
            if (Jogadores[i].geraID() == ID|| nome ==Jogadores[i].getNome())
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
    Times.push_back(Time(nome));
}


void Empresa::listaJogador()
{
    for (int i = 0; i < Jogadores.size(); i++)
    {
       
        cout << Jogadores[i].getNome() <<endl;
    }
}

void Empresa::relatorioFinanceiro()
{
    //float total,total2, INSS, totalIR;

    for (int i = 0; i < Times.size(); i++)
    {
        
        
            Times[i].Imprimi();
            Times[i].getSalarioTotal();
            Times[i].getINSS();
            Times[i].getIR();
        
    }
}
void Empresa::addJogador(string nome, string nacionalidade, string categoria, float salario_bruto, int dia, int mes, int ano)
{
   
           Jogadores.push_back(Jogador(nome, nacionalidade, categoria, salario_bruto, dia, mes, ano));
 
}


