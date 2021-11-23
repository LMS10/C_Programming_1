# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

double StDev(int* arr)
{
	int i;
	double x = 0, avg = 0, sum = 0, result = 0;

	for (i = 0; i < 5; i++)
	{
		avg += arr[i];
	}
	avg = avg / 5;

	for (i = 0; i < 5; i++)
	{
		x = arr[i] - avg;
		sum += pow(x, 2);
	}

	result = sqrt(sum / 5);
	return result;
}

int main(void)
{
	int arr[5];
	printf("Enter 5 real numbers : ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("Standard Deviation = %.3f", StDev(arr));

	return 0;
}
