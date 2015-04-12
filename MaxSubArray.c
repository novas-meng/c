//给你一个长度为N的整数数组，请找出最大的子数组和。 -- 《编程之美》
//记录一下思路，对于array来说，寻找最大子数组和，可以进行遍历，从i=0开始
//遍历，包含两种情况，一种是包含i，另外一种是不包含；不包含i说明maxsum和i-1时相等；
//包含i说明，从i往前数的某个子序列，要大于i-1时最大子数组的；
#include <stdio.h>
int max(int a,int b)
{
	return a>b?a:b;
}
/*
int maxsubarray(int array[],int length)
{
	//sincei表示从i往前找的最大子数组的和；
	int m=0;
	int sincei=0;
	int i=0;
	for(i=0;i<=length;i++)
	{
		//表示第i个位置向前找，找最大值；为什么和0进行比较，只有当它大于0时，
		 //才值得去比较，否则说明array[i]一定是个负数，而且负数要大于它
		  // 之前那些正数的和；
		//为什么和0比较，当大于0时，说明从i位置向前查找，是可能为最大子数组的；
		sincei=max(0,sincei+array[i]);
        m=max(m,sincei);
       // printf("i=%d sincei=%d m=%d \n",i,sincei,m);
	}
	return m;
}
*/
int maxsubarray(int array[],int length)
{
    int m=0;
    int sincei=0;
    int i;
    for(i=0;i<=length;i++)
    {
    	sincei=max(0,sincei+array[i]);
    	m=max(m,sincei);
    }
    return m;
}
int main()
{
	int array[10]={-1,-2,-3,-5,-6,-10,7,-12,-20,-15};
	printf("%d\n",maxsubarray(array,9));
}