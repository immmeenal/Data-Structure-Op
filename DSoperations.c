#include<stdio.h>
#include<stdlib.h>
#define max 20
int main()
{
int a[max], i,n,ch,ele,pos,s,flag=0,j,temp;
do
{
printf("\npress 1 for create\npress 2 for travel (display)\npress 3 for insert\npress 4 for delete\npress 5 for search\npress 6 for sorting");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:		
printf("\nhow many no do u want in array");
scanf("%d",&n);
printf("\nenter the elements of array");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
break;
case 2:
printf("\ndisplay of array:");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
break;
case 3:
printf("\nenter the element and its position where you want to insert the element");
scanf("%d%d",&ele,&pos);
for(i=n-1;i>=pos-1;i--)
{
	a[i+1]=a[i];
}
a[i+1]=ele;
n++;
break;
case 4:
printf("\nenter the position to delete value");
scanf("%d",&pos);
ele=(pos-1);
for(i=pos-1;i<n-1;i++)
{
     a[i]=a[i+1];	
}  
n--;                        	
break;
case 5:
printf("\nenter no to search on array");
scanf("%d",&s);
for(i=0;i<n;i++)
{
	if(a[i]==s)
	{
		flag=1;
		break;
	}
}
if(flag==1)
{
	printf("\n%d element found at %d position",s,(i+1));
}
else
{
	printf("\nno element found");
}
break;
case 6:
printf("\nsorting an array");
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1;j++)
	{
		if(a[j]>a[j+1])
		{
		   temp=a[j];
		   a[j]=a[j+1];
		   a[j+1]=temp;	
		}
	}
}
printf("\nsorted elements are :");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
break;
default:printf("Invaild Option.."); 
}
printf("\npress 1 to continue the process");
scanf("%d",&ch);
}while(ch==1);
return 0;
}










