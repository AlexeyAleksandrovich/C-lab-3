/* �������� ���������, ����������� ������ ���������� �����. ����� ������ � ������ H, ������� �������� �������������.
   � ����� ������ ������� ����� ������ ���������� ���������� �� ������� L = gt^2/2, ��� g = 9.81 m/c.
   ��������� ����� ����������� ��� � ������� � ������� �� �������� ������� �������� ������ ��� ������������ ����� h.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "task1.h"

int main()
{
	int currTime = 0, startHeight = 0;
	double Height = 0;							//������� ������
	//double t_BABAH = 0;
	
	printf("Enter startHeight: ");
	scanf("%d", &startHeight);
	Height = startHeight;
	//t_BABAH = sqrt(2*startHeight/G);

	while (Height > 0)
	{
		printf("t=%02d c\t h=%06.1f m\n", currTime++, Height);
		Height = height(currTime, startHeight);
	}
	//printf("t=%02f c \t h=0000.0 m\n", t_BABAH);
	printf("BABAH");
	return 0;
}