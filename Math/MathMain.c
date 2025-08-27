#include <stdio.h>
#include "MathUtils.h" //nhúng file header MathUtils.h , File header (đuôi .h) trong C là nơi chứa các khai báo (declaration), File header (đuôi .h) trong C là nơi chứa các khai báo (declaration), 
int main(){
    int a = 10, b = 5;
    printf("Phép cộng: %d + %d = %d\n", a, b, add(a, b)); 
    printf("Phép trừ: %d - %d = %d\n", a, b, subtract(a, b));
    printf("Phép nhân: %d * %d = %d\n", a, b, multiply(a, b));
    printf("Phép chia: %d / %d = %d\n", a, b, divide(a, b));
    printf("Phép chia lấy phần dư: %d %% %d = %d\n", a, b, modulus(a, b));
    return 0;
}