#include"user_funs.h"
#include"math.h"

matrix ff(matrix x, matrix ud1, matrix ud2)
{
    matrix y;
    y = (-cos(0.1 * x()) * exp( - (pow(0.1 * x() - (2 * _Pi), 2)))) + (0.002 * pow((0.1 * x()), 2));
    return y;
}

double fib_value(double k) {
    int t1 = 0;
    int t2 = 1;
    double out = 0;
    for (int i = 1; i < k; i++) {
        if (k == 1) {
            return t1;
        }      
        if (k == 2) {
            return t2;
        }
        out = t1 + t2;
        t1 = t2;
        t2 = out;
    }
    return out;
}