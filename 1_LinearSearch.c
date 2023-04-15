#include<stdio.h>
main()
{
int array[50],n,i,ts,f;
printf("Enter size of array");
scanf("%d",&n);
printf("Enter elements in array");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
printf("Enter elements to search");
scanf("%d",&ts);
f=0;
for(i=0;i<n;i++)
{
if(array[i]==ts)
{
printf("\n%d is found at position %d",ts,i+1);
}
else
{
printf("\n%d is not found",ts);
}
}
}

