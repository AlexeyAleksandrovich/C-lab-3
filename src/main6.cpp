/*
   �������� ���������, ��������� ������ �� ������ ��������.
   ������� ��������� ������� � ������ ������, � ����� ������
   � ������� ����� �������, ���� �� ���������� ������ 1.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task6.h"

int main()
{
	//FILE * ptrFile = fopen("log.txt", "a");	//����� �������� �����
	char line[512] = { 0 };
	printf("Enter a string: ");
	fgets(line, 512, stdin);
	fflush(stdin);								//������� ����� �����
	clear(line);
	puts(line);
	//fputs(line, ptrFile);						//��������� ����
	return 0;
}