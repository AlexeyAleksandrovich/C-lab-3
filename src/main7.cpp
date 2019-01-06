/*
   �������� ���������, ��������� ������� ������������� �������� ��� ���������
   ������������� ������. � ���� ������� ���������� ������ ������ � ����� ��� ����������.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[512] = { 0 };							//������� ������
	char counter[128] = { 0 };						//������ ��������
	char symbols[128] = { 0 };						//������ ��������
	int n = 0;										//

	printf("Enter a string:");
	fgets(str, 512, stdin);
	fflush(stdin);									//������� ����� �����
	printf("You have %d symbols\n", strlen(str)-1);
	//---������������ ������� ��������-------------
	for (int i = 32; i <= 126; i++)
		symbols[i] = ' ' + n++;
	//---������������ ������� ��������-------------
	for (int i = 0; i <= strlen(str); i++)
	{
		for (int j = 32; j <= 126; j++)
			if (str[i] == symbols[j])
				counter[j]++;
	}
	//---����� �����������-------------------------
	printf("ASCII\tcounter\n");
	for (int m = 32; m <= 126; m++)
		printf("%c\t%d\n", symbols[m], counter[m]);
	return 0;
}