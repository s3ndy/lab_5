#include "StdAfx.h"
#include "Souse.h"
#include <iostream>
#include<iomanip>
using namespace std;
Souse::Souse(void){}
Souse::Souse(const char *Title, const unsigned int Price, int Cal) :Food(Title, Price, Cal){};

void Souse::setTitle(const char*Title)
{
	this->title = Title;
}
void Souse::setPrice(unsigned int Price)
{
	this->price = Price;
}
const char* Souse::getTitle()const
{
	return title;
}
unsigned int  Souse::getPrice()const
{
	return price;
}
void Souse::setCal(int Cal)
{
	this->cal = Cal;
}
int  Souse::getCal()const
{
	return cal;
}
Souse::~Souse(void){}
void Souse::print(void)
{

	cout << setw(20) << "Название : " << setw(10) << this->getTitle() << endl;
	cout << setw(16) << "Цена : " << setw(10) << this->getPrice() << "руб/упаковка" << endl;
	cout << setw(20) << "Калорийность : " << setw(10) << this->getCal() << endl;
	cout << setw(20) << "_________________________________________________" << setw(10) << endl;
}
void Souse::show(void)
{

	Food *p = head;
	while (p)
	{
		p->print();
		cout << endl;
		p = p->next;
	}
}
void Souse::add(Food *d)//Food *d
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