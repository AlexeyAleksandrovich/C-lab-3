int wordCount(char buf[])
{
	int i = 0; int count = 0;
	int state = 0;//0- ��� , 1 - ������ , state �������� ����������, ��� ��������� : � ������ � ��� 
	
	while (buf[i])
	{
		if (buf[i] != ' ' && state == 0)
		{
			state = 1; count++;
		}
		else if (buf[i] == ' ' && state == 1)
			state = 0; i++;
	}
	return count;
}