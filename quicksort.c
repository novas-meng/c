#include <stdio.h>
int partition(int array[],int p,int q)
{
	int x=array[q];
	int i=p-1;
	int j;
	int temp;
	for(j=p;j<=q-1;j++)
	{
		if(array[j]<=x)
		{
			i++;
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
			
		}
	}
	//array[q]=array[i+1]+array[q];
	//array[i+1]=array[q]-array[i+1];
	//array[q]=array[q]-array[i+1];
	temp=array[q];
	array[q]=array[i+1];
	array[i+1]=temp;
	return i+1;
}
int quicksort(int array[],int p,int q)
{
	int flag;
	if(p<q)
	{ 
       flag=partition(array,p,q);
       quicksort(array,p,flag-1);
       quicksort(array,flag+1,q);
	}
}
int main()
{
	int i=0;
	int array[10]={1,2,3,4,4,5,34,23,98,23};
	quicksort(array,0,9);
	for(i=0;i<10;i++)
	{
	    printf("%d ",array[i]);
	}
	printf("\n");
}