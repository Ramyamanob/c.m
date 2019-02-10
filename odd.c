# c.m
#include<stdio.h>
int main()
{
    int N,Q;
    scanf("%d%d",&N,&Q);
    for(int i=N;i<Q;i++)
    {
        if(i!=1)
    {
        if(i%2==1)
        {
            printf("%d ",i);
        }
    }
    }
    return 0;
}
