#include<stdio.h>
#include<time.h>

main()
{
	int a[6] = { 0 }; //�ֻ���
	int i;
	srand((unsigned)time(NULL));
	//int* ptr = a; //�ּҰ� ����Ǵ� ������ ����
	//ptr = a; // a������ �ּҰ� ��� �� �ִ�.
	for (i = 0; i < 100; i++)
	{
		/*a[i] = *(&ptr[i]) + 1;*/
		int r = rand() % 6; //1~6
		++a[r];
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d %d\n", i+1, a[i]);
	}
	system("pause");
}