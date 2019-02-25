#ifndef SOURCEFILESFUNC_H
#define SOURCEFILESFUNC_H

#include <iostream>

using namespace std;


double func1(double par); // объявление функции возвращающей значение с аргументом в виде переменной.

double func2(const double &par); // объявление функции возвращающей значение с аргументом в виде констатнтой ссылки.

void func3(const double &par1, double *par2); // объявление функции не возвращающей значение с целевым аргументом в виде указателя.

void func4(const double &par1, double &par2); // объявление функции не возвращающей значение с целевым аргументом в виде ссылки.

#endif