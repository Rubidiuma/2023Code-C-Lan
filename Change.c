#include <stdio.h>
int main(){
    int n, n50, n20, n10, n5, n1;
    scanf("%d", &n);
    n50 = n / 50;
    n = n - n50 * 50;
    n20 = n / 20;
    n = n - n20 * 20;
    n10 = n / 10;
    n = n - n10 * 10;
    n5 = n / 5;
    n1 = n - n5 * 5;
    printf("%d\n%d\n%d\n%d\n%d\n", n50, n20, n10, n5, n1);
    return 0;  
}