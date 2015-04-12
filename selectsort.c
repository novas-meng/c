//第一次选择最小的，然后与array[0]交换，第二次从1.。。n，选择最小的，与array[1]交换，依次类推
#include <stdio.h>
/*
int selectsort(int array[],int length)
{
	int i=0;
	int j;
	int index;
    int temp;
	for(i=0;i<=length;i++)
	{
		index=i;
		for(j=i+1;j<=length;j++)
		{
			if(array[j]<array[index])
			{
				index=j;
			}
		}
		temp=array[index];
		array[index]=array[i];
		array[i]=temp;
	}
	return 0;
}
*/
int selectsort(int array[],int length)
{
	int i;
	int j;
	int temp;
	int index;
	for(i=0;i<=length;i++)
	{
		index=i;
		for(j=i+1;j<=length;j++)
		{
			if(array[j]<array[index])
			{
				index=j;
			}
		}
		temp=array[i];
		array[i]=array[index];
		array[index]=temp;
	}
	return 1;
}
int main()
{
    int i=0;
	int array[10]={5,13,3,41,4,5,34,23,98,23};
	selectsort(array,9);
	for(i=0;i<10;i++)
	{
	    printf("%d ",array[i]);
	}
	printf("\n");
}