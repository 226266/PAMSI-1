// Definicja klasy Array


#ifndef ARRAY_HH
#define ARRAY_HH

#define START 10
#define VALUE 5

#include <iostream>
#include "iArray.hh"
#include "iRunnable.hh"


class Array : public iArray, public iRunnable {
	
	int *_pArray;                       // wskaznik na tablice
	int *pom; //tablica pomocnicza, potrzebna przy scalaniu
	unsigned int _size;                 // rozmiar tablicy

public:
	
	Array(unsigned int number);
	~Array();
	void extendArray(unsigned int amount);
	void writeElem(unsigned int index, int value);
	int readElem(unsigned int index);
	void quicksort(int num1, int num2);
	void fillIncrease();
	void fillDecrease();
	void fillRandom();
	void merge(int left, int middle, int right);
	void mergesort(int left, int right);

	void doAlgorithm(unsigned int amount);
	void neutralise();


};


#endif
