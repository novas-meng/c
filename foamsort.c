#include <stdio.h>
 /*
void foamsort(int array[],int length)
{
	int i=0;
	int j;
	for(i=0;i<length;i++)
	{
        for(j=length;j>=i+1;j--)
        {
        	if(array[j]<array[j-1])
        	{
        		array[j]=array[j]+array[j-1];
        		array[j-1]=array[j]-array[j-1];
        		array[j]=array[j]-array[j-1];
        	}
        }
	}
}
*/
void foamsort(int array[],int length)
{
	int i,j;
	for(i=0;i<=length;i++)
	{
		for(j=length;j>=i+1;j--)
		{
			if(array[j]<array[j-1])
			{
				array[j]=array[j]+array[j-1];
				array[j-1]=array[j]-array[j-1];
				array[j]=array[j]-array[j-1];
			}
		}
	}
}
int main()
{
    int i=0;
	int array[10]={2,3,3,4,4,5,34,23,98,23};
	foamsort(array,9);
	for(i=0;i<10;i++)
	{
	    printf("%d ",array[i]);
	}
	printf("\n");
}