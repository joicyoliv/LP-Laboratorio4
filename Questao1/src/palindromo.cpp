/**
* @file		palindromo.cpp
* @brief	Arquivo de corpo com a implementação das funções necessarias para avaliar se uma string é ou não um palindromo
* @details	
*
* @author	Joicy Oliveira (joiicyoliv@gmail.com)
* @author	William Correia (will.correia.lima@gmail.com)
* @since	21/05/2018
* @date		23/05/2018	
*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>

#include "pilha.h"
#include "palindromo.h"


/**
* @brief 	Troca todos os carateres acentuados pelo mesmo caracter sem acento e remove todos os espaços e pontuações existetentes
* @param 	palavra String que terá os acentos, espaços e pontuações removidos
* @return 	String de entrada sem acentuação, espaços e pontuações
*/

std::string& tratandoPalavra ( std::string& palavra )
{
	std::vector < std::string > letraAcentuada = { "Ä","Å","Á","Â","À","Ã","ä","á","â","à","ã","É","Ê","Ë","È",
	"é","ê","ë","è","Í","Î","Ï","Ì","í","î","ï","ì","Ö","Ó","Ô","Ò","Õ","ö","ó","ô","ò","õ","Ü","Ú","Û",
	"ü","ú","û","ù","Ç","ç" };
	std::vector < std::string > letraNaoAcentuada = { "A","A","A","A","A","A","a","a","a","a","a","E","E","E","E",
	"e","e","e","e","I","I","I","I","i","i","i","i","O","O","O","O","O","o","o","o","o","o","U","U","U",
	"u","u","u","u","C","c" };

	for (unsigned int i = 0; i < palavra.size(); ++i)
	{
		for (unsigned int j = 0; j < letraAcentuada.size(); ++j)
		{
			std::size_t achouLetraAcentuada = palavra.find(letraAcentuada[j]);
			
			if ( achouLetraAcentuada != std::string::npos)
			{
				palavra.replace( achouLetraAcentuada, letraAcentuada[j].size(), letraNaoAcentuada[j] );
			}
		}
	}

	for (auto i = palavra.begin(); i != palavra.end(); ++i)
	{
		if (std::ispunct(*i) or std::isspace(*i))
		{
			palavra.erase(i--);
		}
	}
	

	return palavra;
}

/**
* @brief 	Verifica se uma string é um palindromo
* @param	palavra String que será verificada
* @return 	True se a string for um palindromo e False caso contrário
*/

bool palindromo ( std::string palavra )
{
	tratandoPalavra(palavra);
	
	for (unsigned int i = 0; i < palavra.size(); ++i)
	{
		palavra.at(i) = std::toupper(palavra.at(i));
	}

	stack::Pilha < char > letras(palavra.size());
	
	for (unsigned int i = 0; i < palavra.size()/2; ++i)
	{
		letras.push(palavra[i]);
	}

	for (unsigned int i = palavra.size()/2 + palavra.size()%2; i < palavra.size(); ++i)
	{
		if ( !letras.empty() and letras.top() == palavra[i])
		{
			letras.pop();
		}
	}
	
	if (letras.empty())
	{
		return true;
	}

	return false;
}
