#include"user_funs.h"
#include"math.h"

matrix ff(matrix x, matrix ud1, matrix ud2)
{
    matrix y;
    y = (-cos(0.1 * x()) * exp( - (pow(0.1 * x() - (2 * _Pi), 2)))) + (0.002 * pow((0.1 * x()), 2));
    return y;
}