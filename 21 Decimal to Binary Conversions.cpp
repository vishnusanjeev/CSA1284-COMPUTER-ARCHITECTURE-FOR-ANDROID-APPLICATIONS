#include <stdio.h>
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("Binary: 0");
        return;
    }
    int binary[32]; // Assuming 32-bit binary representation
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}
int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimalToBinary(decimal);
    return 0;
}
