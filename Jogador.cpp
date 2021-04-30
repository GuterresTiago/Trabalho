#include "Jogador.h"

static int ID=0;
Jogador::Jogador(string nome, string nacionalidade, string categoria, float salario_bruto)
{
	this->nome = nome;
	this->nacionalidade = nacionalidade;
	this->categoria = categoria;
	this->salario_bruto = salario_bruto;
	this->ID = geraID();

}

void Jogador::setNome(string nome)
{
	this->nome = nome;
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
void Jogador::getIdade(int idade)
{

}
void Jogador::getCalcularSalario(float salario_bruto)
{
    if (salario_bruto > 0 && salario_bruto <= 1100.00)
    {
        salario_bruto = salario_bruto * (7.5 / 100);
    }
    else if (salario_bruto > 1100.00 && salario_bruto <= 2000.00)
    {
        salario_liquido = salario_bruto * (9 / 100);
        salario_liquido = salario_bruto * (7.5 / 100);
    }
    else if (salario_bruto > 2000.00 && salario_bruto <= 3100.00)
    {
        salario_liquido = salario_bruto * (12 / 100);
        salario_liquido = salario_bruto * (15 / 100);
    }
    else if (salario_bruto > 3100.00 && salario_bruto <= 4100.00)
    {
        salario_liquido = salario_bruto * (14 / 100);
        salario_liquido = salario_bruto * (22 / 100);
    }
    else if (salario_liquido > 4100.00)
    {
        salario_liquido = salario_bruto * (14 / 100);
        salario_liquido = salario_bruto * (27 / 100);
    }
}


