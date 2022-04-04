#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y, z, t;
	printf("请输入三个数:\n");
	scanf("%d%d%d", &x, &y, &z);
	if (x>y)
	{
		t = x; x = y; y = t;
	}
	if (x>z)
	{
		t = z; z = x; x = t;
	}
	if (y>z)
	{
		t = y; y = z; z = t;
	}
	printf("从小到大排序：%d %d %d", x, y, z);
}