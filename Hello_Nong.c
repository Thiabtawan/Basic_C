
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