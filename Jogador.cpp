#include "Jogador.h"

 int Jogador::ID=0;
Jogador::Jogador(string nome,string nacionalidade,string categoria,float salario_bruto,int dia, int mes ,int ano)
{
	this->nome = nome;
	this->nacionalidade = nacionalidade;
	this->categoria = categoria;
	this->salario_bruto = salario_bruto;
	this->ID = geraID();
    this->salario_liquido= getCalcularSalario();

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
    int aux;
    aux = 60-idade;
    if (aux > 0)
    {
        cout << "Tempo que falta ate aposentadoria: " << aux << endl;
        return tempo_restante = aux;

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
	return ++ID;
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
    if (salario_bruto > 0 && salario_bruto <= 1100.00)
    {
        salario_bruto = salario_bruto * (7.5 / 100);
        INSS = salario_bruto - salario_liquido;
    }
    else if (salario_bruto > 1100.00 && salario_bruto <= 2000.00)
    {
        salario_liquido = salario_bruto * (9 / 100);
        INSS = salario_bruto- salario_liquido; 
        salario_liquido = salario_bruto * (7.5 / 100);
        IR = salario_bruto - salario_liquido-INSS;
    }
    else if (salario_bruto > 2000.00 && salario_bruto <= 3100.00)
    {
        salario_liquido = salario_bruto * (12 / 100);
        INSS = salario_bruto - salario_liquido;
        salario_liquido = salario_bruto * (15 / 100);
        IR = salario_bruto - salario_liquido - INSS;
    }
    else if (salario_bruto > 3100.00 && salario_bruto <= 4100.00)
    {
        salario_liquido = salario_bruto * (14 / 100);
        INSS = salario_bruto - salario_liquido;
        salario_liquido = salario_bruto * (22 / 100);
        IR = salario_bruto - salario_liquido - INSS;
    }
    else if (salario_liquido > 4100.00)
    {
        salario_liquido = salario_bruto * (14 / 100);
        INSS = salario_bruto - salario_liquido;
        salario_liquido = salario_bruto * (27 / 100);
        IR = salario_bruto - salario_liquido - INSS;
    }
    return salario_liquido;
}


