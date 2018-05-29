/**
* @file		palindromo.h
* @brief	Arquivo cabeçalho com as declarações funções necessarias para avaliar se uma string é ou não um palindromo
* @details	
*
* @author	Joicy Oliveira (joiicyoliv@gmail.com)
* @author	William Correia (will.correia.lima@gmail.com)
* @since	21/05/2018
* @date		23/05/2018	
*/

#ifndef PALINDROMO_H
#define PALINDROMO_H

#include <iostream>
#include <string>
#include "pilha.h"

/**
* @brief 	Troca todos os carateres acentuados pelo mesmo caracter sem acento e remove todos os espaços e pontuações existetentes
* @param 	palavra String que terá os acentos, espaços e pontuações removidos
* @return 	String de entrada sem acentuação, espaços e pontuações
*/
std::string& tratandoPalavra ( std::string& palavra );

/**
* @brief 	Verifica se uma string é um palindromo
* @param	palavra String que será verificada
* @return 	True se a string for um palindromo e False caso contrário
*/
bool palindromo ( std::string palavra );

#endif