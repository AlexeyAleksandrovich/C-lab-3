/*
 �������� ���������, �������������� ������� � ������� �������� �������:
 ������� ���� ��������� �����, ����� �����. ������ �������� � ���� ���������
 � ���� ��������� ������������������ ���� � ����.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task4.h"

#define N 512

int main()
{
	char line[N] = { 0 };
	
	printf("Enter a string: ");
	fgets(line, N, stdin);
	printf("\n");
	process(line);
	puts(line);
	return 0;
}