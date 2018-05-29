#include <iostream>
#include <memory>
#include "lista.h"

using namespace std;

/* Implementacao da classe fila */

// Para permitir sobrecarregar o operador de insercao
// numa classe template como friend eh preciso adicionar
// o trecho de codigo a seguir
template <typename T> class Fila; // Declaracao antecipada da classe
template <typename T> // Definicao antecipada do template para o operador de insercao
std::ostream& operator<<( std::ostream&, Fila<T> const & );
// --

template <typename T>
class Fila : private ListaCircular<T> {
public:
	Fila();
	~Fila();
	T front ();
	T back ();
	bool empty();
	int size();
	bool push (T);
	bool pop ();

	friend std::ostream& operator<< <T>( std::ostream&, Fila<T> const & );
};


template <typename T>
Fila<T>::Fila(){}

template <typename T>
Fila<T>::~Fila(){}


template <typename T>
T Fila<T>::front (){
	if(empty()) return -1;
	return this->cabeca->getValor();
}

template <typename T>
T Fila<T>::back (){
	if(empty()) return -1;
	return this->cauda->getValor();
}

template <typename T>
bool Fila<T>::empty(){
	if(this->size() == 0 ) return true;
	return false;
}

template <typename T>
int Fila<T>::size(){
	return ListaCircular<T>::size();
}

template <typename T>
bool Fila<T>::push ( T _valor){

	return this->InsereNoFinal(_valor);

}

template <typename T>
bool Fila<T>::pop (){

	return this->RemoveNoInicio();
}


template <typename T> 
std::ostream& operator<<( std::ostream& o , Fila<T> const & f){
	int quantidade = f.tamanho;
	if(quantidade > 0 ){
		auto atual = f.cabeca;
		int quantidade = f.tamanho;
		quantidade++;
		while ( atual->getNext() != f.cabeca) {
			o << atual->getValor() << " ";
			atual = atual->getNext();
		}
		o << atual->getValor() << " ";
	}
	return o;
}