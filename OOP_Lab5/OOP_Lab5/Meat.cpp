#include "StdAfx.h"
#include "Meat.h"
#include <iostream>
#include<iomanip>
using namespace std;
Meat::Meat(void){}
Meat::Meat(const char *Title, const unsigned int Price,int Cal) :Food(Title, Price,Cal){};

void Meat::setTitle(const char*Title)
{
	this->title = Title;
}
void Meat::setPrice(unsigned int Price)
{
	this->price = Price;
}
const char* Meat::getTitle()const
{
	return title;
}
unsigned int  Meat::getPrice()const
{
	return price;
}
void Meat::setCal( int Cal)
{
	this->cal = Cal;
}
 int  Meat::getCal()const
{
	return cal;
}
Meat::~Meat(void){}
void Meat::print(void)
{

	cout << setw(20) << "Название : " << setw(10) << this->getTitle() << endl;
	cout << setw(16) << "Цена : " << setw(10) << this->getPrice() << " $/кг" << endl;
	cout << setw(20) << "Калорийность : " << setw(10) << this->getCal() << endl;
	cout << setw(20) << "_________________________________________________" << setw(10) << endl;
}
void Meat::show(void)
{

	Food *p = head;
	while (p)
	{
		p->print();
		cout << endl;
		p = p->next;
	}
}
void Meat::add(Food *d)//Food *d
{
	if (!head)
	{
		head = d; //d
		d->next = NULL; //d
	}
	else
	{
		Food * q = head;
		if (q->next == NULL)
		{
			q->next = d;
			d->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			};
			q->next = d;
			d->next = NULL;
		}
	}
}