int getSumInt(int arr[], int N)
{
	int min, max, btwMinMax = 0;
	int sum = 0;

	for (int i = 0; i < N; i++)  //����� ������������ � ������������� 
	{

		if (arr[i] < 0 && btwMinMax == 0)
		{
			min = i;
			btwMinMax = 1;
		}
		else if (arr[i] >= 0 && btwMinMax == 1)
			max = i;
	}

	for (int i = min + 1; i < max; i++)  //����� ����� ������������ � ����������� 
		sum += arr[i];

	return sum;
}