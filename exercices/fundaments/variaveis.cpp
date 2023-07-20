#include <cstdio>

int main() {
    //type identifier = value
    double price = 99.80;
    double tax = 0.08;

    double finalPrice = price * (1 + tax);

    printf("The final price is %.2f.", finalPrice);
    return 0;
}