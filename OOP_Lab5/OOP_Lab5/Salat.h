#pragma once 
#include"Food.h"

class Salat
{
	
protected:
	static Food *head;
public:
	 
	Food *next;
	Salat(void);
	virtual void add(Food*d);
	static void show(); // статический метод
	virtual void print();
	~Salat(void);
};