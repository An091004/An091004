#include <stdio.h>
int main() {
    float a = 2.0;  // Ví dụ a = 2
    float b = 4.0;  // Ví dụ b = 4
    float c = 10.0; // Ví dụ c = 10
    float x;
    if (a != 0) {
        x = (c - b) / a;
        printf("Nghiem cua phuong trinh la: x = %.2f\n", x);
    } else {
        if (b == c) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    }
    return 0;
}
