// Question URL: https://www.acmicpc.net/problem/1011
#include <stdio.h>

int Sol(int x, int y)
{
	int distance = 0, count = 0;
	while (x < y)
	{
		distance++;
		if (y - x <= distance)
		{
			count++;
			break;
		}
		else
		{
			x += distance; y -= distance;
			count += 2;
		}
	}
	return count;
}
int main()
{
	int test_case, x, y;

	scanf("%d", &test_case);

	while (test_case--)
	{
		scanf("%d %d", &x, &y);
		printf("%d\n", Sol(x, y));
	}
}

