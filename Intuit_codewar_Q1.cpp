#include <stdio.h>

int main()
{
    int N;
    long int Q;
    scanf("%d",&N);
    scanf("%ld",&Q);
    int t[N+1][N+1];
    int i,j;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
        scanf("%d",&t[i][j]);
        }
    }
    
    int T,x1,y1,x2,y2;
    char C;
    while(Q--)
    {
    scanf("%d",&T);
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    scanf("%c",&C);
    printf("%c char is ",C);
    int val;
    if(C=='R')
        val=0;
    else if(C=='G')
        val=1;
    else val=2;
    printf("%d value is ",val);
    int count=0;
    for(i=x1;i<=x2;i++)
    {
        for(j=y1;j<=y2;j++)
        {
            int div=T/t[i][j];
            int mod =div%3;
            if(mod==val)
            {
                count++;
            }
        }
    }
    printf("\n%d",count);
    } 
    return 0;
}

