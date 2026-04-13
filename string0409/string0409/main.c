#include <stdio.h>
#define WIDTH 10
#define HEIGHT 10

//void pos(char* map, int pos) {
//    *(map + pos) = 'P';
//}
//
//void printMap(char* map) {
//    for (int i = 0; i < HEIGHT; i++) {
//        for (int j = 0; j < WIDTH; j++) {
//            printf("%c ", *(map + i * WIDTH + j));
//        }
//        printf("\n");
//    }
//}
//
//int main(void)
//{
//	char board[10][10] = { {'#', '#', '#', '#', '.', '.', '.', '.', '.', '.' },
//
// {'.', '.', '.', '.', '.', '#', '.', '.', '.', '.' },
//
// {'#', '#', '#', '.', '#', '.', '.', '.', '.', '.' },
//
// {'.', '.', '#', '.', '.', '#', '.', '.', '.', '.' },
//
// {'.', '.', '#', '.', '.', '#', '.', '.', '.', '.' },
//
// {'.', '.', '#', '.', '.', '#', '.', '.', '.', '.' },
//
// {'.', '.', '.', '#', '.', '.', '#', '#', '.', '.' },
//
// {'.', '.', '.', '.', '#', '.', '.', '.', '#', '#' },
//
// {'.', '.', '.', '.', '.', '#', '.', '.', '.', '.' },
//
// {'.', '.', '.', '.', '.', '#', '#', '#', '#', '#' } };
//
//
//	    char* ptr = &board[0][0];
//
//    int playerPos = 1 * WIDTH + 1;
//
//	pos(ptr, playerPos);
//
//    // 초기 출력
//    printMap(ptr);
//
//    while (1) {
//
//        // 입력 처리 (WASD)
//        if (_kbhit()) {
//            char input = _getch();
//
//            int newPos = playerPos;
//            int oldPos = playerPos;
//
//            if (input == 'w'&& input == '') newPos -= WIDTH;
//            else if (input == 's') newPos += WIDTH;
//            else if (input == 'a') newPos -= 1;
//            else if (input == 'd') newPos += 1;
//            else continue;
//
//            if (newPos < 0 || newPos >= WIDTH * HEIGHT)
//                continue;
//
//            if (input == 'a' && playerPos % WIDTH == 0) continue;
//            if (input == 'd' && playerPos % WIDTH == WIDTH - 1) continue;
//
//            char target = *(ptr + newPos);
//	
//
//	return 0;
//}