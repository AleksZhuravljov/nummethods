// Описание: работа с функциями.

#include <iostream>

using namespace std;


double func1(double par); // объявление функции возвращающей значение с аргументом в виде переменной.

double func2(const double &par); // объявление функции возвращающей значение с аргументом в виде констатнтой ссылки.

void func3(const double &par1, double *par2); // объявление функции не возвращающей значение с целевым аргументом в виде указателя.

void func4(const double &par1, double &par2); // объявление функции не возвращающей значение с целевым аргументом в виде ссылки.


int main() {

    double X = 0; // переменная аргумент

    double Y = 0; // переменная значение


    // использование функций:

    Y = func1(X);
    std::cout << "type double, passing a variable " << Y << std::endl;

    Y = func2(X);
    std::cout << "type double, passing a const reference " << Y << std::endl;

    func3(X, &Y);
    std::cout << "type void, passing a pointer " << Y << std::endl;

    func4(X, Y);
    std::cout << "type void, passing a reference " << Y << std::endl;

    return 0;
}


// определение функций:

double func1(double par) {
    return par + 1.;
}

double func2(const double &par) {
    return par + 2.;
}

void func3(const double &par1, double *par2) {
    *par2 = par1 + 3;
}

void func4(const double &par1, double &par2) {
    par2 = par1 + 4;
}