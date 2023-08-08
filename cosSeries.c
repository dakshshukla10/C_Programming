#include <stdio.h>
#include <math.h>

double factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

double cosine(double x_deg, int n) { //x_deg and not x because redefination not allowed
    double x = x_deg*(M_PI/180);
    double result = 0.0;
    for (int i = 0; i < n; i++) {
        result += pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
    }
    return result;
}

int main() {
    double x;
    int n = 5; //Gives the most precise answer
    
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    // printf("Enter the number of terms: ");
    // scanf("%d", &n);
    

    double result = cosine(x, n);
    printf("cos(%lf) using %d terms is approximately: %lf\n", x, n, result);
    
    return 0;
}
