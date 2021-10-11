# pragma warning(disable : 4996)
# include <stdio.h>

int main(void)
{
	int num, i, cnt = 0;

	printf("Please enter a number : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cnt = cnt + 1;
		}
	}

	if (cnt == 2)
	{
		printf("It is a prime number.\n");
	}
	else
		printf("It is not a prime number.\n");

	return 0;
}
