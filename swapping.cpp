#include <stdio.h>
void swapMulDiv(int *a,int *b)
{
	printf("Swapping using * and / \n");
	*a = *a * *b;
	printf("After a = a * b;	a = %d b = %d \n",*a,*b);
	*b = *a / *b;
	printf("After b = a / b;	a = %d b = %d \n",*a,*b);
	*a = *a / *b;
	printf("After a = a / b;	a = %d b = %d \n",*a,*b);
}
void swapExOr(int *a,int *b)
{
	printf("Swapping using ^ \n");
	*a = *a ^ *b;
	printf("After a = a ^ b;	a = %d b = %d \n",*a,*b);
	*b = *a ^ *b;
	printf("After b = a ^ b;	a = %d b = %d \n",*a,*b);
	*a = *a ^ *b;
	printf("After a = a ^ b;	a = %d b = %d \n",*a,*b);
}

void swapAddSub(int *a,int *b)
{
	printf("Swapping using + and - \n");
	*a = *a + *b;
	printf("After a = a + b;	a = %d b = %d \n",*a,*b);
	*b = *a - *b;
	printf("After b = a - b;	a = %d b = %d \n",*a,*b);
	*a = *a - *b;
	printf("After a = a - b;	a = %d b = %d \n",*a,*b);
}

int main()
{
	int a = 2, b = 5;
	printf("Before Swapping a = %d b = %d \n",a, b);
	swapAddSub(&a , &b);
//	swapMulDiv(&a, &b);
//	swapExOr(&a , &b);
	printf("After Swapping a = %d b = %d \n",a, b);
}
