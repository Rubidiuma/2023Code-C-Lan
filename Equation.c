//
// Created by Rubidium on 2023/9/24.
//

#include <stdio.h>
#include <math.h>

int main(void){
    int p, q;
    double p1, q1, m, n;
    double x1;
    scanf("%d%d", &p, &q);
    p1 = p * 1.0f / 3.0;
    q1 = q * 1.0f / 2.0f;
    m = sqrt (pow(q1, 2.0f) + pow(p1,3.0f));
    n = 1.0f / 3;
    x1 = (pow(-q1 + m, n) + pow(-q1 - m, n)) * 1.0;
    //x1 = cbrt(-q1 + m) + cbrt(-q1 - m);
    printf("%.3f", x1);
    return 0;
}