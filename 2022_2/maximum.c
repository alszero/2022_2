#include<stdio.h>

main()
{
	int num[5];
	int i, maximum = 0;

	for (i = 0; i < 5; i++)
	{
		printf("���ڸ� �Է��ϼ���: ");
		scanf_s("%d", &num[i]);
	}
	
	maximum = num[0];

	for (i = 1; i < 5; i++)
	{
		if (maximum < num[i])
			maximum = num[i];
	}

	for (i = 0; i < 5; i++) 
	{
		printf("%d\t", num[i]);
	}
	printf("�ִ밪�� %d�Դϴ�.", maximum);

	system("pause");

}