
/*membors 
1:Tiago Guterres dos Santos 
2:Gabriel Moreira
3:Mauricio Bernardes

*/

#include <iostream>
#include "Empresa.h"
//#include "Time.h"
//#include "Jogador.h"

int main()
{
	Empresa bla("dois irmaos");
	Empresa ta("fafa");

	
	Time va("Vasco");
	Time Ib("Ibis");
	
	
	bla.adicionarTime("Vasco");


	
	va.adicionaJogador("Alberto", "Brasileiro", "Proficional", 300.00, 15, 5, 1980);
	va.adicionaJogador("Godofredo", "Brasileiro", "Base", 1500.00, 15, 5, 2001);
	va.adicionaJogador("Tom", "Argentino", "Proficional", 4100.00, 18, 1, 1985);
	Ib.adicionaJogador("Dario", "Romeno", "Proficional", 2500.00, 1, 8, 2000);
	Ib.adicionaJogador("Creuse", "Brasileiro", "Proficional", 300.00, 25, 3, 1995);
	va.adicionaJogador("Strarovisc", "Russo", "Base", 800.00, 3, 4, 2003);


	va.getSalarioTotal();
	
	//bla.relatorioFinanceiro();
	//ta.relatorioFinanceiro();
	

	Ib.geraRelatorioFinanceiro();
	va.geraRelatorioFinanceiro();

	


}


//(string nome, string nacionalidade, string categoria, float salario_bruto, int dia, int mes, int ano)