#include<stdio.h>
#include<stdlib.h>

void cubbyReference(int &nPtr);

int main(void)
{
	int num = 5;
	printf("The original value of number is %d", num);
	cubbyReference(num);
	printf("\nThe new value of number is %d\n", num);
	system("pause");
	return 0;
}

void cubbyReference(int &nPtr)
{
	nPtr = nPtr * nPtr * nPtr;
}