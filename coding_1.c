//求一个char（8bit）中，二进制1的个数，越快越好。 -- 
//《编程之美》
#include <stdio.h>
int count(char ch)
{
	int i;
	int count=0;
	int temp=(int)ch;
	while(temp>0)
	{
        i=temp>>1;
        //printf("i=%d\n",i);
        if(2*i!=temp)
        {
        	count++;
        }
        temp=i;
	}
	return count;
}
int main()
{
	char ch='d';

	printf("%d\n",count(ch));
}