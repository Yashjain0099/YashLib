#include<stdio.h>


void fact(int a)
{
	int f=1;
	for(int i=1;i<=a;i++)
		f=f*i;	
	printf("Factorial of %d is %d\n",a,f);	
}

void prime(int a)
{
	int i;
	if(a==0 || a==1)
		printf("%d is not a prime number\n",a);
	else
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				printf(" %d is not a prime number\n");
				break;
			}
		}	
		if(a==i)
			printf("%d is a prime number\n");
}


// STRING OPERATIONS //
 


int StrLen(char *c)
{
	int count=1;
	for(int i=1;;i++)
	{
		if(*(c+i)!= '\0')
		{
			count++;
		}
		else 
			break;
	}
	return count;
	
}

void StrReverse(char *c)
{
	int len=StrLen(c);
	for(int i=0;i<len/2;i++)
	{
		char temp=c[i];
		c[i]=c[(len-1)-i];
		c[(len-1)-i]=temp;
	}
}


// ARRAY OPERATIONS //


void linearSearch(int *a,int size,int target)
{
	for(int i=0;i<size;i++)
	{
		if(*a==target)
			printf("%d found in %d position\n",target,i+1);
		a++;
	}
}


int FindMax(int *a,int size)
{
	int max=*a;
	int count=0;
	for(int i=1;i<size;i++)
	{
		if(*(a+i)>max)
		{
			max=*(a+i);
			count++;
		}
	}
	if(count==0)
		printf("all value is same\n");
	//printf("MAXIMUM value in an array is %d\n",max);
	
	return max;
}

int FindMin(int *a,int size)
{
	int min=*a;
	for(int i=1;i<size;i++)
	{
		if(*(a+i)<min)
			min=*(a+i);
	}
	printf("MINIMUM value in an array is %d\n",min);
	
	return min;
}

void rmvDuplicate(int *a, int size)
{
	int i=0;
	while(i<size)
	{
		int j=i+1;
		while(j<size)
		{
			if(*(a+i)==*(a+j))
			{
				int k=j;
				for(;k<size-1;k++)
				*(a+k)=(*(a+(k+1)));
				*(a+(size-1))=NULL;
			}
			j++	;
		}	
		i++;
	}
}

void Secondlargest(int *a, int size)
{
	int largest=FindMax(a,size);
	int smallest=FindMin(a,size);
	int secondlargest=smallest;
	for(int i=0;i<size;i++)
	{
		if(*(a+i)<largest && *(a+i)>smallest)
			secondlargest=*(a+i);	
	}
	
	printf("second largest is %d",secondlargest);
}
