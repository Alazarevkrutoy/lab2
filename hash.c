#include<stdlib.h>
#include<stdio.h>
#include<time.h>


int Hash(int, int, int);    
    
int main () 
{	
	const int maxSize=50;
    int a[maxSize],n,c,b[maxSize];;
    srand(time(0));
    printf("Input keys[1..50]: \n");
    scanf("%d",&n);
    while(n<1 || n>50)
	{
		printf("This is not correct!");
		scanf("%d",&n);
	}
	for(c=0; c<n; c++)
	{
		a[c]=rand()%101-50;
	}
	printf("\n");	
	for(c=0; c<n; c++)
	{
		b[c]=Hash(a[c], c, n);
	}
	
	for(c=0; c<n; c++)
	{
		printf("Hash function(%d): %d\n",a[c],b[c]);
	}
	int max=b[0],min=b[0];
	for(c=1; c<n; c++)
	{
		if(b[c]>max)
		{
			max=b[c];
		}
		if(b[c]<min)
		{
			min=b[c];
		}
	}
	printf("Minimal value: %d",min);
    return 0;
}

int Hash(int c, int k, int n)
{
	int res;
    return (res=(k*c)/n); 
}
 
