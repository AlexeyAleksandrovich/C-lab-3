/*�������� ���������, ������� ��������� ������������� ������ ������� N, 
   � ����� ������� ����� ���������, ������������� ����� ������ �������������
   � ��������� ������������� ����������.*/

#include <stdio.h>
#include "task5.h"
#include<time.h>
#include <stdlib.h>
#define N 10

int main()
{
	int arr[N];
	srand(time(0));
	int number = 0;

	for (int i = 0; i < N; i++)  //���������� �������
	{
		number = (rand() % 11)* (rand() % 2 ? 1 : -1);
		arr[i] = number;
	}

	for (int i = 0; i < N; i++) //����� 
		printf("%02d ", arr[i]);
	putchar('\n');

	printf("Sum: %d", getSumInt(arr, N));

	return 0;
}