/*������ �6
 �������� ���������, ������� ��������� ������������� ������ ������� N, 
 � ����� ������� ����� ��������� ����� ������ ����������� � ������ ������������ ����������.
������:

[1 -2 3 -4 -6 2 3] -> -4

������

��������� ������ �������� �� �������:

    - int getSumMaxMin(int arr[],int N) - ���������� ����� � ������� arr ����� N
    - main()
����� ��������� ���������� � �����: task6.h, task6.cpp, main6.cpp*/

#include <stdio.h>
#include "task6.h"
#include <time.h>
#include <stdlib.h>

int  elemenOfMassive(int arr[], int N)
{

	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100 - 50;
		arr[N] = '\0';
		printf("%d ", arr[i]);
	}

	return 0;
}
int main()
{
	int arr[256] = { 0 };
	int N = 0;
	printf("Enter N :");
	scanf("%d", &N);
	elemenOfMassive(arr, N);
	getSumMaxMin(arr, N);
	return 0;
}