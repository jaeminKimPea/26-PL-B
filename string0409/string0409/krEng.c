#include <stdio.h>
#include <string.h>
#define WORDS 5

int main() {
	int i, index;
	char dic[WORDS][2][30] = {
		{"사과", "apple" },
		{"바나나", "banana"},
		{"포도", "grape"},
		{"오렌지", "orange"},
		{"복숭아", "peach" },
	};
	char str[30];
	int found = 0;
	while (str == NULL) {
		printf("영어 단어를 입력하세요: ");
		scanf("%s", str);
		for (i = 0; i < WORDS; i++) {
			if (strcmp(str, dic[i][0]) == 0) {
				printf("검색된 단어: %s , %s\n", dic[i][0], dic[i][1]);
				found = 1;
				break;
			}
			if (strcmp(str, dic[i][1]) == 0) {
				printf("검색된 단어: %s , %s\n", dic[i][1] , dic[i][0]);
				found = 1;
				break;
			}
		}
		if (found == 0) {
			printf("단어를 찾을 수 없습니다.\n");
		}
		
	}
	
	return 0;
}