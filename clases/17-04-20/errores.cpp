#include <stdio.h>

char* printb(bool b) {
    printf((b)?"true\n":"false\n");
    return 0;
}

int main() {

    int a = 3250;
    double b = 0.26;
    double res = a * b;
    // debería dar 845
    // float res, b : 844.999939
    // double res, b : 845.000000
    printf("3250 * 0.26 = %20f\n", res);

    printb(3.0/7.0 == 3.0/7.0);
    return 0;
}
 
