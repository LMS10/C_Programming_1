#pragma warning(disable : 4996)
# include <stdio.h>

int main(void)
{
	float km;
	printf("Please enter kilometers: ");
	scanf("%f", &km);
	printf("%.1f %s %.1f %s\n", km, "km is equal to", km / 1.609, "miles.");
  
	return 0;
}
