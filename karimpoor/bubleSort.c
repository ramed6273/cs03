#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
	srand(time(NULL));
	int numbers[100];
	printf("UNSORTED LIST:\n");
	for (int i = 0; i < 100; i++) {
		numbers[i] = rand() % 100;	
		printf("%d - %d\n", i + 1, numbers[i]);
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100 - i - 1; j++) {
			if (numbers[j] >= numbers[j+1]) {
				int temp = numbers[j+1];
				numbers[j+1] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
	printf("SORTED LIST:\n");
	for (int i = 0; i < 100; i++) {
		printf("%d - %d\n", i + 1, numbers[i]);
	}
	return 0;
}
