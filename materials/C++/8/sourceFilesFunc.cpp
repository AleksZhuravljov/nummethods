#include "sourceFilesFunc.h"

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