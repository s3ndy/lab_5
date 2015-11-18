#include "StdAfx.h"
#include "Salat.h"
#include"Meat.h"
#include <iostream>
#include<iomanip>
using namespace std;



Food * Salat::head = NULL;
Salat::Salat(void){}
Salat::~Salat(void){}
void Salat::print(void)
{
	cout << setw(30) << "Салат  " << setw(10) << endl;
	cout << setw(20) << "---------------------------------------------" << setw(10) << endl;
}

void Salat::show(void)
{

	Food *p = head;
	while (p)
	{
		p->print();
		cout << endl;
		p = p->next;
	}
}


void Salat::add(Food *d)//Food *d
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