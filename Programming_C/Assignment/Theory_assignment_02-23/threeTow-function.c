#include <stdio.h>

int add_two_nums(int a, int b);
int add_three_nums(int a, int b, int c);


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = add_two_nums(a, b);
    int ans = add_three_nums(a, b, c);

    printf("%d", ans);
    return 0;
}


int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}

int add_two_nums(int a, int b)
{
	return a+b;
}
