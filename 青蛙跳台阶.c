#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fib(int n)
{
	if (n == 1)
		return 1;
	else if (n ==2)
		return 2;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
int ret = 0;
int n = 0;
printf("��������Ҫ�����ٸ�̨��:\n");
scanf("%d", &n);
ret = Fib(n);
printf("%d\n", ret);
}