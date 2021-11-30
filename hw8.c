# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}

int main(void)
{
	int ch;
	printf("문자열 입력 : ");
	
	while (1)
	{
		ch = getchar();
		ch = convCase(ch);
		if (ch == EOF)
			break;
		putchar(ch);
	}

	return 0;
}
