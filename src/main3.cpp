/*�������� ���������, ��������� �� ����� ����������� �� ��������:
  *
 ***
*****

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task3.h"

int main()
{
	int count = 0;			//line - ���������� ����� ������ � ������� ������������, count - ����� ���������� �����
	char buf[256] = { 0 };

	printf("Enter namber of count: ");
	scanf("%d", &count);
	for (int line = 1; line <= count; line++)
		puts(layout(buf, line, count));
	return 0;
}