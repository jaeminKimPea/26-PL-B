#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main (void) {
    SetConsoleOutputCP(65001);
    int x;
    int y;
    int sum;

    x = 100;
    y = 200;
    sum = x + y;
    
    printf("두 수의 합: %d\n", sum);
    system("pause");
    return 0;
}