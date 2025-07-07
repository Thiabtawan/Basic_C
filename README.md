# C Programming - Control Structures (โครงสร้างควบคุมในภาษา C)

[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://www.gnu.org/software/gnu-c-manual/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

> เอกสารสำหรับเรียนรู้โครงสร้างควบคุมพื้นฐานในภาษา C แบบเข้าใจง่าย

## 📚 Table of Contents
- [if-else Statement](#1-if-else-statement)
- [for-loop](#2-for-loop)
- [while-loop](#3-while-loop)
- [do-while-loop (โบนัส)](#4-do-while-loop-โบนัส)
- [สรุปความแตกต่าง](#สรุปความแตกต่าง)
- [เคล็ดลับ](#เคล็ดลับ)

## 1. if-else Statement

### รูปแบบพื้นฐาน
```c
if (เงื่อนไข) {
    // คำสั่งที่ทำเมื่อเงื่อนไขเป็นจริง
} else {
    // คำสั่งที่ทำเมื่อเงื่อนไขเป็นเท็จ
}
```

### ตัวอย่าง
```c
#include <stdio.h>

int main() {
    int score = 85;
    
    if (score >= 80) {
        printf("เกรด A\n");
    } else if (score >= 70) {
        printf("เกรด B\n");
    } else if (score >= 60) {
        printf("เกรด C\n");
    } else {
        printf("เกรด F\n");
    }
    
    return 0;
}
```

## 2. for-loop

### รูปแบบพื้นฐาน
```c
for (ค่าเริ่มต้น; เงื่อนไข; การเพิ่ม/ลด) {
    // คำสั่งที่ต้องการทำซ้ำ
}
```

### ตัวอย่าง
```c
#include <stdio.h>

int main() {
    // พิมพ์ตัวเลข 1-5
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // หาผลรวม 1+2+3+4+5
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }
    printf("ผลรวม = %d\n", sum);
    
    return 0;
}
```

## 3. while-loop

### รูปแบบพื้นฐาน
```c
while (เงื่อนไข) {
    // คำสั่งที่ต้องการทำซ้ำ
}
```

### ตัวอย่าง
```c
#include <stdio.h>

int main() {
    int i = 1;
    
    // พิมพ์ตัวเลข 1-5
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    // หาตัวเลขที่หารด้วย 3 ลงตัว
    int num = 10;
    while (num % 3 != 0) {
        num++;
    }
    printf("ตัวเลขแรกที่หารด้วย 3 ลงตัว: %d\n", num);
    
    return 0;
}
```

## 4. do-while-loop (โบนัส)

### รูปแบบพื้นฐาน
```c
do {
    // คำสั่งที่ต้องการทำซ้ำ
} while (เงื่อนไข);
```

### ตัวอย่าง
```c
#include <stdio.h>

int main() {
    int number;
    
    do {
        printf("กรอกตัวเลข (0 เพื่อหยุด): ");
        scanf("%d", &number);
        printf("คุณกรอก: %d\n", number);
    } while (number != 0);
    
    return 0;
}
```

## สรุปความแตกต่าง

| โครงสร้าง | ใช้เมื่อ | ลักษณะ |
|----------|---------|--------|
| **if-else** | ต้องการตรวจสอบเงื่อนไขและทำคำสั่งตามเงื่อนไข | ทำเพียงครั้งเดียว |
| **for-loop** | รู้จำนวนรอบที่ต้องการทำซ้ำ | วนซ้ำจำนวนครั้งที่กำหนด |
| **while-loop** | ไม่รู้จำนวนรอบ แต่รู้เงื่อนไขหยุด | วนซ้ำจนกว่าเงื่อนไขจะเป็นเท็จ |
| **do-while** | ต้องการทำอย่างน้อย 1 ครั้ง | ทำก่อนแล้วค่อยตรวจสอบเงื่อนไข |

## 💡 เคล็ดลับ
- ใช้ `{}` เสมอแม้มีคำสั่งเดียว เพื่อความชัดเจน
- ตั้งชื่อตัวแปรให้มีความหมาย
- ระวังการวนซ้ำไม่รู้จบ (infinite loop)
- ทดสอบเงื่อนไขขอบเขต (edge cases)

## 🚀 Getting Started

### การคอมไพล์
```bash
gcc -o program program.c
./program
```

### ข้อกำหนดระบบ
- GCC Compiler
- Standard C Library

## 📖 การใช้งาน
คัดลอกโค้ดตัวอย่างไปใส่ในไฟล์ `.c` ของคุณ และคอมไพล์ด้วย GCC

## 🤝 Contributing
หากต้องการเพิ่มตัวอย่างหรือปรับปรุงเอกสาร สามารถสร้าง Pull Request ได้

## 📄 License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
