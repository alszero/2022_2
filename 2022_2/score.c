#include<stdio.h>
#define STUDENTS 5
int main()
{
	int score[STUDENTS];
	int i, sum = 0;
	double avg;

	for (i = 0; i < STUDENTS; i++)
	{
		printf("성적을 입력하세오:");
		scanf_s("%d", &score[i]);
	}
	for (i = 0; i < STUDENTS; i++)
	{
		sum += score[i];
	}
	avg = (double)sum / STUDENTS;
	printf("평균은 %4.2f\n", avg);
	system("pause");
}