/*�������� ���������, ������� ������� ����� ����� �� �������� ������*/
#include <stdio.h>
#include"task4.h"
#include <string.h>
#define N 256

int main()
{
	char buf[N];

	printf("Enter a string:\n");
	fgets(buf, N, stdin);

	printf("Summa: %d", getSum(buf));
	return 0;
}