#include<stdio.h>
#include<time.h>

main()
{
	int a[6] = { 0 }; //주사위
	int i;
	srand((unsigned)time(NULL));
	//int* ptr = a; //주소가 저장되는 포인터 변수
	//ptr = a; // a변수의 주소가 들어 가 있다.
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