#pragma once
#include"Food.h"
#include <iostream>
class Meat :public Food
{
public:
	
	Meat(void);
	Meat(const char*, const unsigned int, int);

	virtual void setTitle(const char *Title);
	virtual const char* getTitle()const;
	virtual void setPrice(const unsigned int Price);
	virtual unsigned int getPrice()const;
	virtual void setCal(int Cal);//
	virtual int getCal()const;//
	friend std::ostream& operator<<(std::ostream &out, const Meat& e);
	static void show(); // статический метод
	virtual void add(Food *d);
	virtual void print(void);
	~Meat(void);
};