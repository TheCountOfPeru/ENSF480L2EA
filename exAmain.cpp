// exAmain.cpp
// ENSF 480 Lab 2 -  FALL 2018 - Exercise A
// Author - Jonathan Yee

#include <iostream>
#include "point.h"
using namespace std;
int point::id = 1000;
int main()
{
	point a(100000.01,100000.01);
	a.display();
}