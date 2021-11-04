#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main(int argc, char** argv) {
	
	int arraySize = atoi(argv[1]);
	int* tab = (int*)malloc(sizeof(int) * arraySize);
	
	srand(time(NULL));
	
	for (int i = 0; i < arraySize; i++) {
		tab[i] = rand() % 1000;
	}

	for (int i = 0; i < arraySize; i++) {
		printf(" %d", tab[i]);
	}

	qsort(tab, arraySize, sizeof(int), cmpfunc);
	
	printf("\n\n");
	
	for (int i = 0; i < arraySize; i++) {
		printf(" %d", tab[i]);
	}

	free(tab);
	return 0;
}