#include<stdio.h>
#define SIZE 6
main()
{
	int key, i;
	int list[SIZE] = { 10,30,40,20,50,10 };
	printf("Ž���� ���� �Է��Ͻÿ�\n");
	scanf_s("%d", &key);
	for (i = 0; i < SIZE; i++)
	{
		if (list[i] == key)
			printf("���� = %d\n", i);
	}
	printf("Ž������\n");
	system("pause");
}