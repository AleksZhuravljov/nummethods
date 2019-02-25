// Описание: использование векторов и массивов.

#include <iostream>
#include <vector> //подключение класса vector

using namespace std;

int main() {

    int N = 3; // размерность "X" для массивов

    vector<double> array1D11(N, 0); // объявление и инициализация одномерного вектора

    vector<double> array1D12; // объявление одномерного вектора

    double *array1D2; // объявление одномерного массива через указатели
    array1D2 = new double[N]; // инициализация одномерного массива через указатели

    double array1D3[N]; // объявление и инициализация одномерного массива не через указатели


    for (int i = 0; i < array1D11.size(); i++) // присваивание значений элементам инициализированного вектора
        array1D11[i] = i;

    for (int i = 0; i < N; i++) // добавления элементов в конец вектора
        array1D12.push_back(1. + i);


    for (int i = 0; i < N; i++) // присваивание значений элементам массива
        array1D2[i] = 2. + i;


    for (int i = 0; i < N; i++) // присваивание значений элементам массива
        array1D3[i] = 3. + i;


    int M = 4; // размерность "Y" для массивов

    vector<vector<double>> array2D11(M, vector<double>(N, 0));  // объявление и инициализация двумерного вектора

    vector<vector<double>> array2D12; // объявление двумерного вектора

    double **array2D2; // объявление двумерного массива через указатели
    array2D2 = new double *[M]; // инициализация двумерного массива через указатели
    for (int i = 0; i < M; i++)
        array2D2[i] = new double[N];

    double array2D3[M][N]; //объявление и инициализация двумерного массива не через указатели


    for (int i = 0; i < array2D11.size(); i++) // присваивание значений элементам инициализированного вектора
        for (int j = 0; j < array2D11[i].size(); j++)
            array2D11[i][j] = i + j;

    for (int i = 0; i < M; i++) { // добавления элементов в конец вектора
        array2D12.push_back(vector<double>());
        for (int j = 0; j < N; j++)
            array2D12.back().push_back(1. + i + j);
    }


    for (int i = 0; i < M; i++) // присваивание значений элементам массива
        for (int j = 0; j < N; j++)
            array2D2[i][j] = 2. + i + j;


    for (int i = 0; i < M; i++) // присваивание значений элементам массива
        for (int j = 0; j < N; j++)
            array2D3[i][j] = 3. + i + j;


    //Вывод элементов одномерных массивов в консоль:

    cout << "array1D1:" << endl;
    for (int i = 0; i < array1D11.size(); i++)
        cout << array1D11[i] << " ";
    cout << endl << endl;


    cout << "array1D12:" << endl;
    for (int i = 0; i < array1D12.size(); i++)
        cout << array1D12[i] << " ";
    cout << endl << endl;


    cout << "array1D2:" << endl;
    for (int i = 0; i < array1D11.size(); i++)
        cout << array1D2[i] << " ";
    cout << endl << endl;


    cout << "array1D3:" << endl;
    for (int i = 0; i < array1D11.size(); i++)
        cout << array1D3[i] << " ";
    cout << endl << endl;


    //Вывод элементов двумерных массивов в консоль:

    cout << "array2D11:" << endl;
    for (int i = 0; i < array2D11.size(); i++) {
        for (int j = 0; j < array2D11[i].size(); j++)
            cout << array2D11[i][j] << " ";
        cout << endl;
    }
    cout << endl;


    cout << "array2D12:" << endl;
    for (int i = 0; i < array2D12.size(); i++) {
        for (int j = 0; j < array2D12[i].size(); j++)
            cout << array2D12[i][j] << " ";
        cout << endl;
    }
    cout << endl;


    cout << "array2D2:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            cout << array2D2[i][j] << " ";
        cout << endl;
    }
    cout << endl;


    cout << "array2D3:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            cout << array2D3[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    return 0;
}