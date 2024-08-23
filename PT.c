#include <stdio.h>
int main() {
    float a = 2.0; 
    float b = 4.0;  
    float c = 10.0;
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
