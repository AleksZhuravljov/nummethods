// Описание: файловый ввод/вывод.

#include "myLib.h"

int main(int narg, char **arg) {

    //считывание данных:

    GetFromFile dataFile(arg[1]);

    double a1 = dataFile.getWord<double>("a");

    double a2 = dataFile.getWord<double>("a", 1);

    int b = dataFile.getWord<int>("b");

    std::string c = dataFile.getWord<std::string>("c");

    std::vector<int> vec1DInt = dataFile.getVector<int>("vec1DInt");

    std::vector<double> vec1DDouble = dataFile.getVector<double>("vec1DDouble");

    int vec2DCol = dataFile.getWord<int>("vec2DCol");
    std::vector<double> vec1DFor2D = dataFile.getVector<double>("vec2D");
    std::vector<std::vector<double> > vec2D;
    for (int i = 0; i < vec1DFor2D.size() / vec2DCol; i++) {
        vec2D.push_back(std::vector<double>());
        for (int j = 0; j < vec2DCol; j++)
            vec2D.back().push_back(vec1DFor2D[i * vec2DCol + j]);
    }


    //вывод данных в консоль:

    std::cout << "a " << a1 << " " << a2 << std::endl << std::endl;

    std::cout << "b " << b << std::endl << std::endl;

    std::cout << "c " << c << std::endl << std::endl;

    std::cout << "vec1DInt" << std::endl;
    for (int i = 0; i < vec1DInt.size(); i++)
        std::cout << vec1DInt[i] << " ";
    std::cout << std::endl << std::endl;

    std::cout << "vec1DDouble" << std::endl;
    for (int i = 0; i < vec1DDouble.size(); i++)
        std::cout << vec1DDouble[i] << " ";
    std::cout << std::endl << std::endl;

    std::cout << "vec2DCol " << vec2DCol << std::endl;
    std::cout << "vec2D" << std::endl;
    for (int i = 0; i < vec2D.size(); i++) {
        for (int j = 0; j < vec2D[i].size(); j++)
            std::cout << vec2D[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;


    //вывод данных в файл:

    std::ofstream oStream;

    oStream.open("out.txt");

    oStream << "a " << a1 << " " << a2 << std::endl << std::endl;

    oStream << "b " << b << std::endl << std::endl;

    oStream << "c " << c << std::endl << std::endl;

    oStream << "vec1DInt" << std::endl;
    for (int i = 0; i < vec1DInt.size(); i++)
        oStream << vec1DInt[i] << " ";
    oStream << std::endl << std::endl;

    oStream << "vec1DDouble" << std::endl;
    for (int i = 0; i < vec1DDouble.size(); i++)
        oStream << vec1DDouble[i] << " ";
    oStream << std::endl << std::endl;

    oStream << "vec2DCol " << vec2DCol << std::endl;
    oStream << "vec2D" << std::endl;
    for (int i = 0; i < vec2D.size(); i++) {
        for (int j = 0; j < vec2D[i].size(); j++)
            oStream << vec2D[i][j] << " ";
        oStream << std::endl;
    }
    oStream << std::endl;

    oStream.close();


    return 0;
}