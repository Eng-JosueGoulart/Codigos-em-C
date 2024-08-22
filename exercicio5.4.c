#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float flouca, x, alpha;
    x = 2;
    alpha = 2;

    if (x < 0) {
        flouca = (alpha * (pow(-x,(1/2))));
    }
    else if (x >= 0 && x < abs(pow(alpha, 3)))
        flouca = (alpha * pow((M_E),(-alpha* x)));
    else if (x >= abs(pow(alpha, 3))) {
        flouca = alpha;
    }

    printf("%f", flouca);
    return 0;
}

