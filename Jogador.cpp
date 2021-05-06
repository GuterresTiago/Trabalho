#include "Jogador.h"
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
//#include <ctime>
#include <iomanip>
 int Jogador::ultimoID =0;
Jogador::Jogador(string nome,string nacionalidade,string categoria,float salario_bruto,int dia, int mes ,int ano)
{
	this->nome = nome;
	this->nacionalidade = nacionalidade;
	this->categoria = categoria;
	this->salario_bruto = salario_bruto;
	this->ID = geraID();
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    this->salario_liquido= getCalcularSalario();
    this -> idade = getIdade();

}

void Jogador::setDia(int dia)
{
 this-> dia = dia;
}
void Jogador::setMes(int mes)
{
    this->mes = mes;
}
void Jogador::setAno(int ano)
{
    this->ano = ano;
}
void Jogador::setIdade(int idade)
{
    this->idade = idade;
}

int Jogador::getDia()
{
    return dia;
}
int Jogador::getMes()
{
    return mes;
}
int Jogador::getAno()
{
    return ano;
}

int Jogador::getAposentar()
{
    if (idade < 60)
    {
        cout << "Tempo que falta ate aposentadoria: " << 60-idade << endl;
        return tempo_restante;

    }
    else
    {
        cout << "Ja esta aposentado " <<  endl;
        return 0;
    }
}

void Jogador::setNome(string nome)
{
	this->nome = nome;
}

int Jogador::getID()
{
    return ID;
}
string Jogador::getCategoria()
{
    return categoria;
}

string Jogador::getNacionalidade()
{
    return nacionalidade;
}

string Jogador::getNome()
{
    return nome;
}
float Jogador::getSalarioL()
{
    return salario_liquido;
}

void Jogador::setCategoria(string categoria)
{
	this->categoria = categoria;
}
void Jogador::setNacionalidade(string nacionalidade)
{
	this->nacionalidade = nacionalidade;
}
void Jogador::setSalarioBruto(float salario_bruto)
{
	this->salario_bruto = salario_bruto;
}
int Jogador::geraID()
{
    ultimoID++;
	return ultimoID;
}
int Jogador::getIdade()
{
    time_t t = time(0);
    tm* now = localtime(&t);
   
    int total = 0;
    total = 365*(now->tm_year + 1900) + 30*(now->tm_mon + 1) + now->tm_mday - 365*ano - 30*mes - dia;
    idade = total / 365;

    

   return idade;
}
void Jogador::imprime()
{
    cout << ID << " - " << nome << endl;
    cout << ID << " - " << nacionalidade << endl;
    cout << ID << " - " << categoria << endl;
    cout << ID << " - " << salario_bruto << endl;
    cout << ID << " - " << salario_liquido << endl;
    cout << ID << " - " << ID << endl;
    cout << ID << " - " << idade << endl;

}
float Jogador::getSalarioBruto()
{
    return salario_bruto;
}
float Jogador::getINSS()
{
    return INSS;
}
float Jogador::getIR()
{
    return IR;
}

float Jogador::getCalcularSalario()
{
    int b = salario_bruto,a;
    if (salario_bruto > 0 && salario_bruto <= 1100.00)
    {
        INSS = salario_bruto * (7.5 / 100);
        salario_liquido = salario_bruto - INSS;
    }

    if (salario_bruto > 1100.00 && salario_bruto <= 2000.00)
    {
        INSS = salario_bruto * (9 / 100);
      
        IR = salario_bruto * (7.5 / 100);
        salario_liquido = salario_bruto -INSS-IR;
    }

    if (salario_bruto > 2000.00 && salario_bruto <= 3100.00)
    {
        INSS = salario_bruto * (12 / 100);
   
        IR = salario_bruto * (15 / 100);
        salario_liquido = salario_bruto - INSS-IR;
    }

    if (salario_bruto > 3100.00 && salario_bruto <= 4100.00)
    {
        INSS = salario_bruto * (14 / 100);
       
        IR = salario_bruto * (22 / 100);
        salario_liquido = salario_bruto - INSS-IR;
    }

    if (b > 4100.00)
    {
        INSS = salario_bruto * (14 / 100);
      
        IR = salario_bruto * (27 / 100);
        salario_liquido = salario_bruto - INSS-IR;
    }
    
    return salario_liquido;
}


