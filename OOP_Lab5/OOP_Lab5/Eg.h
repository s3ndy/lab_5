#pragma once
#include"Food.h"
#include <iostream>

class Eg :public Food
{
public:
	Eg(void);
	Eg(const char*, const unsigned int,int);

	virtual void setTitle(const char *Title);
	virtual const char* getTitle()const;
	virtual void setPrice(const unsigned int Price);
	virtual unsigned int getPrice()const;
	virtual void setCal(int Cal);//
	virtual  int getCal()const;//
	friend std::ostream& operator<<(std::ostream &out, const Eg& e);
	virtual void print(void);
	static void show(); // статический метод
	virtual void add(Food*d);
	~Eg(void);
};