#include <stdio.h>
#define SIZE 5

void image_briten(int array[][SIZE], int size) {
	int* ptr = &array[0][0]; // 2차원 배열의 첫 번째 요소의 주소를 포인터에 저장
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			*ptr += 10;
			ptr++; // 다음 요소로 이동
		}
	}
}

void print_array(int array[][SIZE], int size) {
	printf("Array elements: \n");
	int* ptr = &array[0][0];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", *ptr);
			ptr++; // 다음 요소로 이동
		}
		printf("\n");
	}
	printf("\n");
}

int main() {
	int data[SIZE][SIZE] = { 
		{10, 20, 30, 40, 50},
		{10, 20, 30, 40, 50}, 
		{10, 20, 30, 40, 50}, 
		{10, 20, 30, 40, 50}, 
		{10, 20, 30, 40, 50}
	};

	print_array(data, SIZE);
	image_briten(data, SIZE);
	print_array(data, SIZE); // 변경 확인용(선택)
}