#pragma once 
#include"Food.h"
#include"Salat.h"
class Cook
{
protected:
public:
	
	Cook(void);
	virtual void countCalorii(Salat*d);
	virtual void print();
	~Cook(void);
};