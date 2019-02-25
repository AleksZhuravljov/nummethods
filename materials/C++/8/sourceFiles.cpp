// Описание: разбиение исходного кода на несколько файлов.

#include "sourceFilesFunc.h"

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