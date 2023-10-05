//
// Created by Rubidium on 2023/9/24.
//
#include <stdio.h>

int main() {
    double G = 6.674E-11, M = 77.15;
    double m, R, F;
    scanf("%lf%lf", &m, &R);
    //printf("%lf", G);
    F = G * M * m / R / R;
    printf("%.3e", F);
    return 0;
}