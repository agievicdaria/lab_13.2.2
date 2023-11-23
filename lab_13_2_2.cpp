#include <cstdio>

#define INPUT(value) scanf("%lf", &value);
#define OUTPUT(value) printf("%.2f ", value);
#define SUM(value, sum) sum += value;

#define PRINT(w)           \
    puts("Сума введених чисел: "); \
    printf(#w "=%.2f\n", w)

void processParams(double& a, double& b, double& c, double& sum) {
    INPUT(a);
    OUTPUT(a);
    SUM(a, sum);

    INPUT(b);
    OUTPUT(b);
    SUM(b, sum);

    INPUT(c);
    OUTPUT(c);
    SUM(c, sum);
}

int main() {
    double a;
    double b;
    double c;
    double sum = 0;

    puts("Введіть числа різних типів: ");
    processParams(a, b, c, sum);
    PRINT(sum);

    return 0;
}
