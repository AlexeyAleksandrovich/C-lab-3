#include <string.h>
#include "task4.h"


int getSum(char buf[])
{
	int len = strlen(buf);
	int summ = 0;
	int flag = 0;
	for (int i = 0; i < len; i++)
	{
		//���� �� ������ � ���� �����, ���� ����� �����������
		if (buf[i] >= '0' && buf[i] <= '9' && buf[i+1] >= '0' && buf[i+1] <= '9' && buf[i+1]!='\0')
		{
			summ += ((int)(buf[i]) - 48) * 10;;		// �������
			summ += ((int)(buf[i+1]) - 48);			// �������
			i++;
			flag = 1;
		}
		//���� �� ������ � ���� �����, ���� ����� �����������
		if (buf[i] >= '0' && buf[i] <= '9'&& flag ==0)
		{
			summ += ((int)(buf[i]) - 48);			// �������
		}
		flag = 0;
	}
	return summ;
}
