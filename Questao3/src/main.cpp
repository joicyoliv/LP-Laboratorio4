/**
 * @file     main.h
 * @brief    Função principal para execução do programa
 *
* @author	Joicy Oliveira (joiicyoliv@gmail.com)
* @author	William Correia (will.correia.lima@gmail.com)
* @since	21/05/2018
* @date		23/05/2018	
*/

#include <iostream>
#include "pilha.h"
#include "lista.h"
#include "fila.h"

using std::string;
using std::cout;
using std::endl;


int main(int argc, char const *argv[])
{

	cout<< "Testando a ListaCircular " << endl;

	ListaCircular<int> lista1;
	cout << "Tamanho: " << lista1.size() << endl;
	lista1.InsereNoFinal(9);
	lista1.InsereNoFinal(10);
	lista1.InsereNoFinal(11);
	lista1.InsereNaPosicao(0,8);
	lista1.InsereNoFinal(13);
	lista1.InsereNaPosicao(4,12);
	lista1.InsereNoFinal(14);
	
	cout << lista1 << endl;
	cout << "Tamanho: " << lista1.size() << endl;
	lista1.RemoveNaPosicao(3);
	cout << "Tamanho: " << lista1.size() << endl;
	cout << lista1 << endl;
	lista1.RemoveNoInicio();
	cout << "Tamanho: " << lista1.size() << endl;
	cout << lista1 << endl;
	lista1.RemoveNoFinal();
	cout << "Tamanho: " << lista1.size() << endl;
	cout << lista1 << endl << endl;
	
	cout<< "----------------------------------------------------------" << endl;
	cout << "Testando a Fila " << endl;
	Fila<int> fila;
	if(fila.empty()){
	cout<< fila << endl;
	cout<< "Tamanho da fila: " << fila.size() << endl;
	fila.push(1);
	cout<< "front : " << fila.front() << endl;
	cout<< "back : " << fila.back() << endl;
	fila.push(2);
	cout<< "front : " << fila.front() << endl;
	cout<< "back : " << fila.back() << endl;
	fila.push(3);
	cout<< "front : " << fila.front() << endl;
	cout<< "back : " << fila.back() << endl;
	fila.push(4);
	cout<< "front : " << fila.front() << endl;
	cout<< "back : " << fila.back() << endl;
	fila.push(5);
	cout<< "front : " << fila.front() << endl;
	cout<< "back : " << fila.back() << endl;
	fila.push(6);
	cout<< "front : " << fila.front() << endl;
	cout<< "back : " << fila.back() << endl;

	cout<< "Tamanho da fila: " <<fila.size() << endl;
	cout<< fila << endl;

	fila.pop();
	cout<< "Tamanho da fila: " <<fila.size() << endl;
	cout<< "Fila : "<< fila << endl;
	cout<< "front : " << fila.front() << endl;
	cout<< "back : " << fila.back() << endl;
	fila.pop();
	cout<< "Tamanho da fila: " <<fila.size() << endl;
	cout<< "Fila : "<< fila << endl;
	cout<< "front : " << fila.front() << endl;
	cout<< "back : " << fila.back() << endl;
	fila.pop();
	cout<< "Tamanho da fila: " <<fila.size() << endl;
	cout<< "Fila : "<< fila << endl;
	cout<< "front : " << fila.front() << endl;
	cout<< "back : " << fila.back() << endl;
	fila.pop();
	cout<< "Tamanho da fila: " <<fila.size() << endl;
	cout<< "Fila : "<< fila << endl;
	cout<< "front : " << fila.front() << endl;
	cout<< "back : " << fila.back() << endl;
	fila.pop();
	cout<< "Tamanho da fila: " <<fila.size() << endl;
	cout<< "Fila : "<< fila << endl;
	cout<< "front : " << fila.front() << endl;
	cout<< "back : " << fila.back() << endl;
	fila.pop();
	cout<< "Tamanho da fila: " <<fila.size() << endl;
	cout<< "Fila : "<< fila << endl;
	cout<< "front : " << fila.front() << endl;
	cout<< "back : " << fila.back() << endl;
	}

	fila.push(1);
	if(fila.empty()){
		cout<< "Não acho que va entrar em";
	}

	return 0;
}