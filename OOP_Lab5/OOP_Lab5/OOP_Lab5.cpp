// LABA3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
#include <fstream>
#include "Food.h"
#include "Meat.h"
#include "Souse.h"
#include "Eg.h"
#include"Salat.h"
#include"Cook.h"
#include "locale"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

	Meat vasya("�������", 10,50);
	vasya.print();

	Souse petya("������", 17600,100);
	petya.print();

	Eg kolya("�������", 12000,150);
	kolya.print();

	Salat olive;
    olive.add(&vasya);
	olive.add(&petya);
	olive.print();
	olive.show();

	Salat sex;
	sex.add(&kolya);
	sex.add(&vasya);
	olive.print();
	sex.show();


	Cook GUZU;
	GUZU.print();
	GUZU.countCalorii(&olive);
	return 0;
}

