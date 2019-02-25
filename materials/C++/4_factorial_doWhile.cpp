// Описание: нахождение факториала, цикл с заранее известным количеством итераций.

#include <iostream>
using namespace std;

int main()
{
  // Объявление и инициализация переменных для:
  int number = 0; // числа, для которого нужно вычислить факториал;
  int i = 0; // для итерирования в цикле;
  int factorial = 1; // факториала (инициализация единицей).

  cout << "enter a number to calculate a factorial: "; // Вывод в консоль запроса на введение числа, для вычисления факториала.
  cin >> number; // Ввод с консоли числа, для вычисления факториала.

  // Вычисление факториала при помощи цикла с заранее неизвестным количеством итераций:
  do
  {
    i++;
    factorial *= i;
  } while (i != number);

  cout << "factorial=" << factorial << endl; // Вывод вычисленного значения факториала в консоль.
  return 0;
}