/**
* @file		polonesa.cpp
* @brief	Arquivo de corpo com a implementação das funções necessarias para avaliar a inversão polonesa
* @details	
*
* @author	Joicy Oliveira (joiicyoliv@gmail.com)
* @author	William Correia (Will.correia.lima@gmail.com)
* @since	21/05/2018
* @date		23/05/2018	
*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>

#include "pilha.h"
#include "polonesa.h"


/**
* @brief 	Avalia uma dada expressão em notação polonesa inversa
* @param 	expressao String que tera operando e operadores
* @return 	Não retorna valor
*/

void resultado (std::string expressao){
	std::string auxiliar = "";
	Pilha<int> numeros;
	int valor1, valor2;
	for (auto i = expressao.begin(); i != expressao.end() ; ++i)
	{
		if( std::isspace(*i)  or std::ispunct(*i) ){
			if(std::isspace(*i)){
				if(auxiliar != ""){
				numeros.push(std::stoi(auxiliar));
				}
			}
			
			auxiliar="";

			if(*i=='+'){
				valor1 = numeros.top();
				numeros.pop();
				valor2 = numeros.top();
				numeros.pop();

				numeros.push(valor1+valor2);
			}
			if(*i=='-'){
				valor1 = numeros.top();
				numeros.pop();
				valor2 = numeros.top();
				numeros.pop();

				numeros.push(valor1-valor2);
			}
			if(*i=='*'){
				valor1 = numeros.top();
				numeros.pop();
				valor2 = numeros.top();
				numeros.pop();

				numeros.push(valor1*valor2);
			}
			if(*i=='/'){
				valor1 = numeros.top();
				numeros.pop();
				valor2 = numeros.top();
				numeros.pop();

				numeros.push(valor2/valor1);
			}
			
			
		}else{
			//std::cout << "valor do auxiliar antes = " << auxiliar << std::endl;
			//std::cout << "valor da expressao = " << *i << std::endl;
			auxiliar=auxiliar+*i;
			//std::cout << "valor do auxiliar depois = " << auxiliar << std::endl;
		
		}
			
	}	
		std::cout << "O resultado da expressao eh " << numeros.top() << std::endl;

}
