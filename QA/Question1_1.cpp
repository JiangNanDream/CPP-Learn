#include <stdio.h>
int main()
{
	int n;
	char t;
	int p = 1;

	scanf("%d", &n);
	while (n >= 1)
	{
		scanf(" %c", &t);

		if ('0' <= t && t <= '9')
		{
			p = t - 48;
			n = n - 1;
			continue;
		}
		if ('a' <= t && t <= 'z')
			t = t - 'a' + 'A';
		else if ('A' <= t && t <= 'Z')
			t = t - 'A' + 'a';
		else
		{
			printf("? *&\\! _//\\a@\\\\\\r\\n! //\\\\\"_\"/\\\\^! ~zZ\n");
			n = n -1;
			continue;
		}

		while (p >= 1)
		{
			printf("%c", t);
			p = p - 1;
		}
		if (p == 0)
			p = 1;
		printf("\n");
		n = n - 1;
	}

	return 0;
}