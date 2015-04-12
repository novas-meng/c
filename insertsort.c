#include <stdio.h>
/*
//length 表示数组的最大索引
void insertsort(int array[],int length)
{
	int i,j;
	int temp;
	// 为什么没有从0开始，因为思想是扑克牌的思想，一开始手里只有一张牌，不用
	//比较，所以从第二个元素开始进行比较
	for(i=1;i<=length;i++)
	{
         j=i;
         //对于当前元素，依次和它之前的元素进行比较，碰到小于的就交换；
         while(array[j]<array[j-1]&&j>0)
         {
         	array[j]=array[j]+array[j-1];
         	array[j-1]=array[j]-array[j-1];
         	array[j]=array[j]-array[j-1];
         	j--;
         }

	}
}
*/
int insertsort(int array[],int length)
{
	int i,j;
	for(i=1;i<=length;i++)
	{
		j=i;
		while(array[j]<array[j-1]&&j>0)
		{
			array[j]=array[j-1]+array[j];
			array[j-1]=array[j]-array[j-1];
			array[j]=array[j]-array[j-1];
		    j--;
		}
	}
}
int main()
{
    int i=0;
	int array[10]={9,3,3,4,4,5,34,23,98,23};
	insertsort(array,9);
	for(i=0;i<10;i++)
	{
	    printf("%d ",array[i]);
	}
	printf("\n");
}