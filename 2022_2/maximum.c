#include<stdio.h>

main()
{
	int num[5];
	int i, maximum = 0;

	for (i = 0; i < 5; i++)
	{
		printf("숫자를 입력하세요: ");
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
	printf("최대값은 %d입니다.", maximum);

	system("pause");

}