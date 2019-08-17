#include<stdio.h>
#include<math.h>
float variance(int arr[],int n,float mean)
{
int i,sum=0,d;
for(i=0;i<n;i++)
{
d=arr[i]-mean;
sum=sum+(pow(d,2));
}
return sum;
}
float std_d(int arr[],int n)
{
int i,sum=0;
float sd,mean;
for(i=0;i<n;i++)
sum+=arr[i];
mean=sum/n;
sd=sqrt(variance(arr,n,mean)/n);
return sd;
}
int main()
{
int n,i,arr[20];
printf("Enter a number\n");
scanf("%d",&n);
printf("Enter elements into the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Standard deviation is %f\n",std_d(arr,n));
}

