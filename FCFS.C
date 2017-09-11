#include<stdio.h>
#include<conio.h>
void main()
{
	int n,bt[10],wt[10],at[10],tat[10],i,j;
	float avg_wt=0,avg_tat=0;
	clrscr();
	printf("Enter the total no of processes: ");
	scanf("%d",&n);
	
	printf("Enter the Burst & Arrival time of processes\n");
	for(i=0;i<n;i++)
	{
		printf("Process[%d]: ",i+1);
		scanf("%d %d",&bt[i],&at[i]);
	}
	printf("Burst time, Arrival time and Turn-around time of processes are:\n");
	wt[0]=0;
	for(i=0;i<n;i++)
	{
		wt[i]=0;
		for(j=0;j<i;j++)
		{
			wt[i]+=bt[j];
		}
		wt[i]-=at[i];
		tat[i]=bt[i]+wt[i];
		avg_tat+=tat[i];
		avg_wt+=wt[i];
		printf("Process[%d] %d %d %d \n",i+1,bt[i],wt[i],tat[i]);
		
	}

	avg_tat/=i;
	avg_wt/=i;
	printf("Average waiting time: %f & Average turnaround time: %f.",avg_wt,avg_tat);
	getch();
}