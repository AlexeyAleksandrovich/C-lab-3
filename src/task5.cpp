#include "task5.h"


int getSumInt(int arr[], int N)
{
	int summ = 0;
	int flag = 0;
	int start = 0, stop = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < 0 && flag == 0) //������ ������ ������������� �������
		{
			start = i;
			flag = 1;
		}
		if (arr[i] > 0)             //������ ��������� ������������� �������
		{
			stop = i;
		}

		if (i == (N - 1)) //����������� ������!
		{
			if (start < stop)
			{
				start = start + 1;
				stop = stop - 1;
			}
			if (start > stop)
			{
				start = start - 1;
				stop = stop + 1;
			}
		}

		if (i == (N - 1) && start < stop && flag == 1)             //������ �����
		{
			for (start; start <= stop;start++)
			{
				summ = arr[start] + summ;
				flag = 0;
			}
		}

		if (i == (N - 1) && start >= stop && flag == 1)             //������ �����
		{
			for (stop; stop <= start;stop++)
			{
				summ = arr[stop] + summ;
				flag = 0;
			}
		}

	}
	return summ;
}