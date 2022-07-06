#include<stdio.h>
int main()
{
	int n,i,at[10],bt[10],ct[10],temp,j, temp2, TAT[10],WT[10],sum=0;
	float AvgTAT, AvgWT;
	printf("Enter the number of processes:\t");
	scanf("%d",&n);
	printf("Enter the arrival time of each process:\t");
	for(i=0;i<n;i++)
	scanf("%d",&at[i]);
	printf("Enter the burst time of each process:\t");
	for(i=0;i<n;i++)
	scanf("%d",&bt[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
	{
		if(at[j]>at[j+1])
		{
			temp=at[j];
			temp2=bt[j];
			at[j]=at[j+1];
			bt[j]=bt[j+1];
			at[j+1]=temp;
			bt[j+1]=temp2;
		}
	}
	
}
ct[0]=bt[0];
for(i=0;i<n;i++)
{
	ct[i+1]=bt[i+1]+ct[i];
}
for(i=0;i<n;i++)
{
	TAT[i]=ct[i]-at[i];
	sum+=TAT[i];
	
}
AvgTAT=(float)sum/n;
sum=0;
for(i=0;i<n;i++)
{
	WT[i]=TAT[i]-bt[i];
	sum+=WT[i];
	
}
AvgWT=(float)sum/n;
printf("Process Id|arrival time|burst time|Completion time\n");
for(i=0;i<n;i++)
{
	printf("%d\t  |%d\t       |%.2d        |%d\n",i+1,at[i],bt[i],ct[i]);
}
printf("/nAverage turn around time is %f",AvgTAT);
printf("/nAverage waiting time is %f",AvgWT);

}
