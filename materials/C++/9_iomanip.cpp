// Описание: форматирование потокового вывода.

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  const float number = 89.093; // Задание константы типа «float».
  cout.precision(5); // Количество знаков всего/после запятой.
  int w = 12; // Переменная для общего количества знаков.

  // Далее «set()» используется для задания количества символов, отводимых выводимому числу:


  cout << setw(w) << number << " - width and precision only" << endl; // только общее количества символов и количество знаков после запятой;

  cout.fill('x'); // заполнение «пустого» места заданным символом;
  cout << setw(w) << number << " - fill" << endl;
  cout.fill(' ');

  cout.setf(ios::fixed, ios::floatfield); // фиксирование количества символов после запятой (независмо от исходной точности);
  cout << setw(w) << number << " - fixed" << endl;

  cout.setf(ios::scientific, ios::floatfield); // экспоненциальный формат;
  cout << setw(w) << number << " - scientific" << endl;

  cout.unsetf(ios::floatfield); // снова только общее количества символов и количество знаков после запятой.
  cout << setw(w) << number << " - width and precision only again" << endl;

  return 0;
}