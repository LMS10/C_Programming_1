# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

typedef struct info {
	char name[20];
	char country[20];
	char population[40];
} Info;

int main(void)
{
	Info arr[3];
	int i = 0;

	printf("Input three cities: \n");
	for (i = 0; i < 3; i++) {
		printf("Name > ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		printf("Country > ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		printf("Population > ");
		fgets(arr[i].population, sizeof(arr[i].population), stdin);
	}

	for (i = 0; i < 3; i++)
	{
		arr[i].name[strlen(arr[i].name) - 1] = 0;
		arr[i].country[strlen(arr[i].country) - 1] = 0;
		arr[i].population[strlen(arr[i].population) - 1] = 0;
	}

	printf("\n\n\nPrinting the three cities: \n");
	for (i = 0; i < 3; i++) {
		printf("%d. %s in %s with a populaion of %s people.\n", i+1, arr[i].name, arr[i].country, arr[i].population);
	}

	return 0;
}
