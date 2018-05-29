#include <iostream>
#include <fstream> 
#include <vector>
#include "pilha.h"
#include "lista.h"
#include "palindromo.h"


/**
 * @file     main.h
 * @brief    Função principal para execução do programa
 *
* @author	Joicy Oliveira (joiicyoliv@gmail.com)
* @author	William Correia (will.correia.lima@gmail.com)
* @since	21/05/2018
* @date		23/05/2018	
*/

int main(int argc, char const *argv[])
{
	std::vector< std::string > conjuntoDeStrings;
	
	std::ifstream arquivo;
	arquivo.open ("Arquivos/ArquivoTeste.dat");
	
	if(!arquivo)
	{
		std::cerr << "O arquivo não foi aberto" << std::endl;
		std::exit(1);
	}

	std::string linha;
	while (std::getline(arquivo,linha))
	{
		conjuntoDeStrings.push_back( linha );
	}

	
	for (auto i = conjuntoDeStrings.begin(); i != conjuntoDeStrings.end(); ++i)
	{
		if (palindromo(*i))
		{
			std::cout << "É palindromo:\t\t " << *i << std::endl;
		}
		else
		{
			std::cout << "Não é palindromo:\t " << *i << std::endl;
		}
	}

	
	return 0;
}