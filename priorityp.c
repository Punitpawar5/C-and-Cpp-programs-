#include<stdio.h>
#include<string.h>
int main()
{
	int et[20],at[10],n,i,j,temp,p[10],st[10],ft[10],wt[10],ta[10];
	int totwt=0,totta=0;
	float awt,ata;
	char pn[10][10],t[10];
	printf("\nEnter the number of process : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("\nEnter process id, arrival time, burst time & priority : ");
		scanf("%s%d%d%d",pn[i],&at[i],&et[i],&p[i]);
	}
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
		{
			if(p[i]<p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
				temp=at[i];
				at[i]=at[j];
				at[j]=temp;
				temp=et[i];
				et[i]=et[j];
				et[j]=temp;
				strcpy(t,pn[i]);
				strcpy(pn[i],pn[j]);
				strcpy(pn[j],t);
			}
		}
	for(i=0; i<n; i++)
	{
		if(i==0)
		{
			st[i]=at[i];
			wt[i]=st[i]-at[i];
			ft[i]=st[i]+et[i];
			ta[i]=ft[i]-at[i];
		}
		else
		{
			st[i]=ft[i-1];
			wt[i]=st[i]-at[i];
			ft[i]=st[i]+et[i];
			ta[i]=ft[i]-at[i];
		}
		totwt+=wt[i];
		totta+=ta[i];
	}
	awt=(float)totwt/n;
	ata=(float)totta/n;
	
	printf("\nPname\tArrival Time\tBurst Time\tPriority\tWaiting Time\tTurnaround Time");
	for(i=0; i<n; i++)
	printf("\n%s\t%5d\t\t%5d\t\t%5d\t\t%5d\t\t%5d\n",pn[i],at[i],et[i],p[i],wt[i],ta[i]);
	printf("\nAverage waiting time is : %f",awt);
	printf("\nAverage turnaroundtime is : %f",ata);
	return 0;
}

