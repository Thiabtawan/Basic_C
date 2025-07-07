#include <stdio.h>

int main() {
    int number;
    
    printf("ใส่ตัวเลข (ใส่ 0 เพื่อหยุด): ");
    scanf("%d", &number);
    
    while (number != 0) {
        printf("คุณใส่: %d\n", number);
        printf("ใส่ตัวเลข (ใส่ 0 เพื่อหยุด): ");
        scanf("%d", &number);
    }
    
    printf("จบโปรแกรม\n");
    
    return 0;
}