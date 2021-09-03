#pragma float_control(except,on)
#include <iomanip>
#include <stdio.h>

int main(void)
{
    long double a = 77617.0L;
    long double b = 33096.0L;
    long double a2, b2, b4, b6, b8, firstexpr, f;
    a2 = a * a;
    b2 = b * b;
    b4 = b2 * b2;
    b6 = b2 * b4;
    b8 = b4 * b4;
    firstexpr = 11.0L * a2 * b2 - b6 - 121.0L * b4 - 2.0L;
    f = 333.75L * b6 + a2 * firstexpr + 5.5L * b8 + (a / (2.0L * b));
    printf("Long Double Precision Result: $ %1.17e \n", f);
    return 0;
}