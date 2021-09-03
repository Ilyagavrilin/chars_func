#include <stdio.h>

int MakeNegative(int a);
int bit_return(int a, int loc);
void display_bits(int a, size_t length);



int main() {
    int a = 14;
    int b = MakeNegative(a);
    display_bits(-8);
    display_bits(a);
    display_bits(b);
    //printf("%d\n", MakeNegative(a));
    return 0;
}

int MakeNegative(int a) {
    int b = ~a | 1;
    if (a <= 0) return a;
    else if (a % 2 == 0) return b + 1;
    else return b;
}

int bit_return(int a, int loc) {
    int buf = a & 1 << loc;
    return (buf == 0)? 0:1;
}
void display_bits(int a, size_t length) {
    printf("Bits of number %d: \n", a);
    for (int i = length -1; i >= 0; i--) {
        printf("%d", bit_return(a, i));
    }
    printf("\n");
}
