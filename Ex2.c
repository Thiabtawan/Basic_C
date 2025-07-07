#include <stdio.h>

int main() {
    int number = 8;
    
    if (number % 2 == 0) {
        printf("%d เป็นเลขคู่\n", number);
    } else {
        printf("%d เป็นเลขคี่\n", number);
    }
    
    return 0;
}