#include <iostream>

using namespace std;

int main()
{
    int n, bt[10],wt[10],tat[10],avwt=0,avtat=0,i,j;
    cout<<"Enter the total number of processes:";
    cin>>n;
    cout<<"\n Enter process burst time:";
    for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
    }

    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
    cout<<"\Process\t\tBrust Time\tWaiting Time\tTurn Around Time";
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
    avwt/=i;
    avtat/=i;
    cout<<"\n\nAverage waiting Time:"<< avwt;
    cout<<"\n\nAverage tat Time:"<< avtat;
    return 0;
}
