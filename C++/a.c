#include<stdio.h>
int main()
{
    int n, wt[20],bt[20], at[20], tat[20],i,j;
    printf("Enter the number of processes:\n");
    scanf("%d", &n);
    //take input the burst Time
    printf("\nenter the burst time for the process:\n");
    for(i=0;i<n;i++)
    {
      printf("P[%d]:-",i+1);
      scanf("%d",&bt[i]);
    }
    //calculate the waiting Time
    wt[0]=0;
    for(i=0;i<n;i++)
    {
        wt[i+1]=bt[i]+wt[i];
        printf("%d\n",wt[i]);
    }

}
