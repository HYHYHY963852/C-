//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列
//#include <stdio.h>
//int main()
//{
//	int i, j, k;        /* 定义三个变量*/
//	printf("\n");      /*输出时自动跳转到下一行*/
//	for (i = 1; i < 5; i++) {       /*第一层循环 */
//		for (j = 1; j < 5; j++) {       /*第二层循环*/
//			for (k = 1; k < 5; k++) {         /*第三层循环*/
//				if (i != k && i != j && j != k) {    /*判断组成三个不重复的数字*/
//					printf("%d,%d,%d\n", i, j, k);       /*输出出来并每输出一个跳到下一行*/
//				}
//			}
//			
//		}
//	}
//}
//1.如果v=0，计算结束，u就是最大公约数
//2.如果v不等于0，那么计算u除以v的余数，让u等于v而v等于那个余数
//3.回到第一步
#include <stdio.h>

int main()
{
	int u = 32;
	int v = 26;
	while (v!=0)
	{
		int temp = u % v;
		u = v;
		v = temp;
	}
	printf("%d", u);
}