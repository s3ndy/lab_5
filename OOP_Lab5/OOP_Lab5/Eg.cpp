#include "StdAfx.h"
#include "Eg.h"
#include <iostream>
#include<iomanip>
using namespace std;
Eg::Eg(void){}
Eg::Eg(const char *Title, const unsigned int Price, int Cal) :Food(Title, Price, Cal){};

void Eg::setTitle(const char*Title)
{
	this->title = Title;
}
void Eg::setPrice(unsigned int Price)
{
	this->price = Price;
}
const char* Eg::getTitle()const
{
	return title;
}
unsigned int  Eg::getPrice()const
{
	return price;
}
void Eg::setCal(int Cal)
{
	this->cal = Cal;
}
int  Eg::getCal()const
{
	return cal;
}
Eg::~Eg(void){}
void Eg::print(void)
{

	cout << setw(20) << "Название : " << setw(10) << this->getTitle() << endl;
	cout << setw(16) << "Цена : " << setw(10) << this->getPrice() << "руб/десяток" << endl;
	cout << setw(20) << "Калорийность : " << setw(10) << this->getCal() << endl;
	cout << setw(20) << "_________________________________________________" << setw(10) << endl;
}
void Eg::show(void)
{

	Food *p = head;
	while (p)
	{
		p->print();
		cout << endl;
		p = p->next;
	}
}
void Eg::add(Food *d)//Food *d
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