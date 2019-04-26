/*

Autor: Thales Costa
Disciplina: ED2
Professor: Irineu
Agosto/2017

*/

#include "biblioteca.h"

using namespace std;

deque<int> Deque;

deque<int>::iterator its;


void Push(int element){
	
	Deque.push_back(element);
	
}

int Pop(){
	int retirado;
	
	retirado = Deque.front();
	
	Deque.pop_front();
	
	return retirado;
}

int Size(){
	
	return Deque.size();
}

bool isEmpty(){

	return Deque.empty();
}

int Front(){
		
	return Deque.front();
}

void Mostrar(){
	
	its = Deque.begin();
	while(its != Deque.end()){
		printf("%d\t", *its);
		its++;
	}
	printf("\n\n");
}






