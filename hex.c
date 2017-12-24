#include <stdio.h>
int main(void){
    const int N=1234;
    printf("Decimal: %d\n",N);
    printf("Hex: %x\n",N);
    printf("Octal: %o\n",N);
    printf("literal (not supported by all complieer):\n");
    printf("0x4d2 = %d  (hex)\n",0x4d2);
    printf("0b10011010010 = %d (binary)\n",0b10011010010);
    printf("02322 = %d (octal,prefix 0 - zero)\n",02322);
}