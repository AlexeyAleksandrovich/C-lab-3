#include "task6.h"


int getSumMaxMin(int arr[], int N)
{
	int summ = 0;
	int flag = 0;
	int start = 0, stop = 0;
	int max = arr[0], min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max)      //������ ������ ������������ �������
		{
			start = i;
			max = arr[i];
			
		}
		if (arr[i] < min)        //������ ������ ����������� �������
		{
			stop = i;
			min = arr[i];
			
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

		if (i == (N - 1) && start < stop && flag == 0)             //������ �����
		{
			for (start; start <= stop;start++)
			{
				summ = arr[start] + summ;
				flag = 1;
			}
		}

		if (i == (N - 1) && start >= stop && flag == 0)             //������ �����
		{
			for (stop; stop <= start;stop++)
			{
				summ = arr[stop] + summ;
				flag = 1;
			}
		}

	}
	return summ;
}