#include <stdio.h>

// 함수 선언
int calcTriangleArea(int a, int b);
int calcRectangleArea(int a, int b);

int main()
{
    int a, b;
    int triArea, recArea;

    printf("두 개의 정수를 입력하세요: ");
    fflush(stdout);
    scanf("%d %d", &a, &b);

    triArea = calcTriangleArea(a, b);
    recArea = calcRectangleArea(a, b);

    printf("삼각형 면적 = %d\n", triArea);
    printf("사각형 면적 = %d\n", recArea);

    return 0;
}
