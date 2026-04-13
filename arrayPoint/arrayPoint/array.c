#include <stdio.h>
#define SIZE 5
double average(int *array, int size) {
	double sum = 0.0;
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum / size;
}

/*void print_array(int *array, int size) {
	printf("Array elements: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main() {
	int data[SIZE] = { 10, 20, 30, 40, 50 };

	print_array(data, SIZE);
	printf("The average is: %.2f\n", average(data, SIZE));
}*/