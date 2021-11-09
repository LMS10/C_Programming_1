# include <stdio.h>

int main(void)
{
	int i;
	int arr[5];

	printf("5개의 정수를 입력합니다.\n\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d번째 정수를 입력하세요 : ", i+1);
		scanf_s("%d", &arr[i], sizeof(arr));
		//printf("\n");
	}


	printf("\n홀수 출력 : ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 1) {
			printf("%d ", arr[i]);
		}
	}
		
	printf("\n짝수 출력 : ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	

	return 0;
}
