#include<stdio.h>
int main()
{
	int a[10],n,i,head,queue1[10],queue2[10],max,j=0,k=0,temp=0,m=0,SeekTime=0;
	printf("Enter the number of requests:\t");
	scanf("%d",&n);
	printf("Enter the head position:\t");
	scanf("%d",&head);
	printf("Enter the requests in order they arrive:\t");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	if(a[i]>head)
	{
	queue1[m]=a[i];
	m++;
}
	else
	{
	queue2[k]=a[i];
	k++;
}
	
}
for (i = 0; i<m; i++)
 {
      // Last i elements are already in place
        for (j = 0; j < m- i - 1; j++)
            if (queue1[j] > queue1[j + 1])
            {
            	temp=queue1[j];
            	queue1[j]=queue1[j+1];
            	queue1[j+1]=temp;
			}
			
                
}

for (i = 0; i<k; i++)
 {
      // Last i elements are already in place
        for (j = 0; j < k- i - 1; j++)
            if (queue2[j] > queue2[j + 1])
            {
            	temp=queue2[j];
            	queue2[j]=queue2[j+1];
            	queue2[j+1]=temp;
			}
			
                
}

 SeekTime=(queue1[m-1]-head)+(queue1[m-1]-queue2[0]);
 printf("SeekTime=%d",SeekTime);
}

