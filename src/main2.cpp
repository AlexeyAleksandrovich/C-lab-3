#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BUFF 128

char * create(char * buf)
{
	srand(time(NULL));
	for (int i = 0; i < BUFF; i++)
	{
		int a = rand() % 3;
		if (a == 0)
			buf[i] = (char)(32);               // ������
		if (a == 1)
			buf[i] = (char)(rand() % 26 + 65); // ����� ��� ������
		if (a == 2)
			buf[i] = (char)(rand() % 26 + 97); // ����� ��� ������
		/*if (a == 3)
			line[i] = char(rand() % 10 + 48); // �����*/
		if (i == BUFF - 1)
			buf[i] = '\0';					  // ����� ������
	}
		return buf;
}

int main()
{
	char  buf[BUFF] = { 0 };
	create(buf);
	printf("The string is \n%s\n", buf);

	int count = 0, size = 0;
	for (int i = 0; i < BUFF; i++)								//������ ����� ������
	{
		size++;
		if (buf[i] == '\0')
			i = BUFF;
	}
	for (int i = 0; i < size; i++)
	{
		if (i == 0 && buf[0] != (char)(32))						//���� ������ ���������� � �����
		{
			for (int j = 0; j < size; j++)
			{
				printf("%c", buf[j]);
				count++;
				if (buf[j + 1] == (char)(32))
				{
					printf("\t In world %d letter\n", count);
					count = 0;
					i = j;
					j = size;
				}
			}
		}
		if (buf[i - 1] == (char)(32) && buf[i] != (char)(32))	//����������� ������ ������ �����
		{
			for (int j = i; j < size; j++)
			{
				printf("%c", buf[j]);
				count++;
				if (buf[j + 1] == (char)(32) || buf[j + 1] == '\0')
				{
					printf("\t In world %d letter\n", count);
					count = 0;
					i = j;
					j = size;
				}
			}
		}
		
	}
	return 0;
}