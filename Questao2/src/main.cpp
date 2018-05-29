#include <iostream>
#include <string>
#include "pilha.h"
#include "polonesa.h"

/**
 * @file     main.h
 * @brief    Função principal para execução do programa
 *
* @author	Joicy Oliveira (joiicyoliv@gmail.com)
* @author	William Correia (will.correia.lima@gmail.com)
* @since	21/05/2018
* @date		23/05/2018	
*/

int main() {
	
	std::string testando;
	std::cout << "Digite a expressao : ";
    std::getline(std::cin, testando);
    resultado(testando);


	return 0;
}