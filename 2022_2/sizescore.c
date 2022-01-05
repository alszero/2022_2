#include<stdio.h>

int main()
{
	int score[3] = { 80,95,100 };
	for (int i = 0; i < 3; i++)
	{
		printf("score의 크기는 %d\n", sizeof(score)); //4바이트*3 = 12
		printf("score[%d]의 크기는 %d\n\n", i, sizeof(score[i])); //4
	}
	printf("score의 갯수는 %d\n", sizeof(score) / sizeof(score[0])); // 12/4 = 3
	system("pause");
}