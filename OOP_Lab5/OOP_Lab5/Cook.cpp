#include "StdAfx.h"
#include "Cook.h"
#include"Meat.h"
#include"Souse.h"
#include <iostream>
#include<iomanip>
using namespace std;

Cook::Cook(void){}
Cook::~Cook(void){}
void Cook::print(void)
{
	cout << setw(30) << " Калории  " << setw(10) << endl;
	cout << setw(20) << "---------------------------------------------" << setw(10) << endl;
}
void  Cook::countCalorii(Salat*d)
{
	int cal=50+100;
	
	cout << "!!!!!!!!!!!!!   " <<cal<< "   !!!!!!!!!!!!!!" << endl;
	
}


