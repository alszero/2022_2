#include<stdio.h>
#define SIZE 10
main()
{
	int list[SIZE] = { 12,3,19,6,18,12,4,1,19 };
	printf("���θ��� �׷����� �׸��ϴ�.\n\n");

	for (int i = 0; i <=SIZE; i++) {
		printf("%3d %3d ", i, list[i]);
		for (int k = 1; k <= list[i]; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}