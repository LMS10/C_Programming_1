# pragma warning(disable : 4996)
# include <stdio.h>

int Dec_To_Bin(int n);

int main(void)
{
	int num;
	printf("Please enter a number : ");
	scanf("%d", &num);
	Dec_To_Bin(num);
	printf("\n");

	return 0;
}

int Dec_To_Bin(int n)
{
	if (n == 1)
		printf("%d", n);
	else
	{
		Dec_To_Bin(n / 2);
		printf("%d", n % 2);
	}
	return 0;
}
