#include"stdafx.h"
#include"Food.h"
#include<iostream>

using namespace std;

Food::Food(void){}
Food::Food(const char *Title, const unsigned int PRICE, int CAL){ title = Title; price = PRICE; cal = CAL; }
Food::~Food(void){}


Food * Food::head = NULL;
