// �������� ���������, ������� ��������� ������������� ������ ������� N, 
//� ����� ������� ����� ��������� ����� ������ ����������� � ������ ������������ ����������.

#include <stdio.h>
#include "task6.h"
#include <time.h>
#include <stdlib.h>
#define N 10 //������ �������
#define  RANGE 50 //������ �����
int main()
{
	srand(time(NULL));
	rand();
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % (2 * RANGE) - RANGE;
		printf("%3d ", arr[i]);
	}
	printf("\nThe sum  is: %d\n", getSumMaxMin(arr, N));
	return 0;
}