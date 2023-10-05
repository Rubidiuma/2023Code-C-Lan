#include <stdio.h>
#include <math.h>

int main(){
    double Pi1, Pi2;
    double n = 640320;
    n = n * n * n * 1.0 + 744.0;
    Pi1 = log(n) / sqrt(163.0);
    Pi2 = 4 * (4 * atan(1.0 / 5.0) - atan(1.0 / 239.0));
    printf("%.15f\n%.15f\n", Pi1, Pi2);
    return 0;
}