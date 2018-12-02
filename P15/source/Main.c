#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#define SWAP(x,y) {int t; t = x; x = y; y = t;}

void bubble(int * const array, const int size);

int main(void)
{
	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int i;
	printf("Data items in original order\n");
	for (i = 0; i < SIZE; i++) printf("%4d", a[i]);
	bubble(a, SIZE);
	printf("\nData items in ascending order\n");
	for (i = 0; i < SIZE; i++) printf("%4d", a[i]);
	printf("\n");
	system("pause");
	return 0;
}

void bubble(int * const array, const int size)
{
	void swap(int *element1Ptr, int *element2Ptr);
	int pass, j;
	for (pass = 0; pass < size - 1; pass++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1]) {
				SWAP(array[j], array[j + 1]);
			}
		}
	}
}
