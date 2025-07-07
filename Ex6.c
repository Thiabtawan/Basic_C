#include <stdio.h>

int main() {
    int num1 = 0; 
    int num2 = 0;
    int num3 = 0;
    char operator1, operator2;
    float result = 0;
    int choice;
    int continue_program = 1;
    
    printf("=== โปรแกรมคิดเลข 3 ตัวเลข (ใช้ if-else, for-loop, while-loop) ===\n");

    
    while (continue_program) {
        printf("=== เมนูหลัก ===\n");
        printf("1. คำนวณ 3 ตัวเลข\n");
        printf("2. ออกจากโปรแกรม\n");
        printf("เลือกตัวเลือก (1-2): ");
        scanf("%d", &choice);
        
        // ใช้ if-else เพื่อจัดการตัวเลือกต่างๆ
        if (choice == 1) {
            printf("\n=== คำนวณ 3 ตัวเลข ===\n");
            printf("รูปแบบ: ตัวเลข1 เครื่องหมาย ตัวเลข2 เครื่องหมาย ตัวเลข3\n");
            printf("เครื่องหมายที่ใช้ได้: + - * /\n\n");
            
            // รับข้อมูลจากผู้ใช้
            printf("กรอกตัวเลขที่ 1: ");
            scanf("%d", &num1);
            
            printf("กรอกเครื่องหมาย (+ - * /): ");
            scanf(" %c", &operator1);
            
            printf("กรอกตัวเลขที่ 2: ");
            scanf("%d", &num2);
            
            printf("กรอกเครื่องหมาย (+ - * /): ");
            scanf(" %c", &operator2);
            
            printf("กรอกตัวเลขที่ 3: ");
            scanf("%d", &num3);
            
            // คำนวณผลลัพธ์
            printf("\n=== การคำนวณ ===\n");
            printf("สูตร: %d %c %d %c %d\n", num1, operator1, num2, operator2, num3);
            
            // คำนวณขั้นตอนที่ 1: num1 operator1 num2
            float temp_result;
            
            // ใช้ if-else แทน switch สำหรับ operator1
            if (operator1 == '+') {
                temp_result = num1 + num2;
                printf("ขั้นตอนที่ 1: %d + %d = %.2f\n", num1, num2, temp_result);
            } else if (operator1 == '-') {
                temp_result = num1 - num2;
                printf("ขั้นตอนที่ 1: %d - %d = %.2f\n", num1, num2, temp_result);
            } else if (operator1 == '*') {
                temp_result = num1 * num2;
                printf("ขั้นตอนที่ 1: %d * %d = %.2f\n", num1, num2, temp_result);
            } else if (operator1 == '/') {
                if (num2 != 0) {
                    temp_result = (float)num1 / num2;
                    printf("ขั้นตอนที่ 1: %d / %d = %.2f\n", num1, num2, temp_result);
                } else {
                    printf("ข้อผิดพลาด: ไม่สามารถหารด้วย 0 ได้!\n");
                    continue;  // กลับไปรอบใหม่ของ while-loop
                }
            } else {
                printf("ข้อผิดพลาด: เครื่องหมายไม่ถูกต้อง!\n");
                continue;  // กลับไปรอบใหม่ของ while-loop
            }
            
            if (operator2 == '+') {
                result = temp_result + num3;
                printf("ขั้นตอนที่ 2: %.2f + %d = %.2f\n", temp_result, num3, result);
            } else if (operator2 == '-') {
                result = temp_result - num3;
                printf("ขั้นตอนที่ 2: %.2f - %d = %.2f\n", temp_result, num3, result);
            } else if (operator2 == '*') {
                result = temp_result * num3;
                printf("ขั้นตอนที่ 2: %.2f * %d = %.2f\n", temp_result, num3, result);
            } else if (operator2 == '/') {
                if (num3 != 0) {
                    result = temp_result / num3;
                    printf("ขั้นตอนที่ 2: %.2f / %d = %.2f\n", temp_result, num3, result);
                } else {
                    printf("ข้อผิดพลาด: ไม่สามารถหารด้วย 0 ได้!\n");
                    continue;  // กลับไปรอบใหม่ของ while-loop
                }
            } else {
                printf("ข้อผิดพลาด: เครื่องหมายไม่ถูกต้อง!\n");
                continue;  // กลับไปรอบใหม่ของ while-loop
            }
            
            // แสดงผลลัพธ์สุดท้าย
            printf("\n=== ผลลัพธ์สุดท้าย ===\n");
            printf("%d %c %d %c %d = %.2f\n", num1, operator1, num2, operator2, num3, result);
            

            
        } else if (choice == 2) {
            printf("\n=== ออกจากโปรแกรม ===\n");
            
            // ใช้ for-loop เพื่อนับถอยหลัง
            printf("กำลังออกจากโปรแกรมใน ");
            for (int i = 3; i >= 1; i--) {
                printf("%d... ", i);
                // หน่วงเวลา (simulation)
                for (int j = 0; j < 100000000; j++) {
                    // ลูปว่างเพื่อหน่วงเวลา
                }
            }
            printf("\n");
            
            printf("ขอบคุณที่ใช้โปรแกรม! ");
            for (int i = 0; i < 5; i++) {
                printf(">< ");
            }
            printf("\n");
            
            continue_program = 0; 
            
        } else {
            printf("\nตัวเลือกไม่ถูกต้อง! กรุณาเลือก 1-4 เท่านั้น\n");
        }
        
        if (continue_program) {
            char continue_choice;
            printf("\nต้องการกลับไปเมนูหลักหรือไม่? (y/n): ");
            scanf(" %c", &continue_choice);
            
            // ใช้ if-else เพื่อตรวจสอบคำตอบ
            if (continue_choice == 'n' || continue_choice == 'N') {
                printf("ขอบคุณที่ใช้โปรแกรม! ลาก่อน!");
                continue_program = 0;  //
            } else if (continue_choice == 'y' || continue_choice == 'Y') {
                printf("\n--- กลับไปเมนูหลัก ---\n\n");
            } else {
                printf("ไม่เข้าใจคำตอบ ถือว่าต้องการกลับไปเมนูหลัก\n\n");
            }
        }
    }
    printf("จบการทำงาน");
    
    return 0;
}