#include <stdio.h>
 
int main()
{
    int N;
    scanf("%d",&N);
    int A[N+1],B[N+1];
    int i,j;
    int max;
    for(i=1;i<=N;i++)
        scanf("%d",&A[i]);
     for(i=1;i<=N;i++)
        scanf("%d",&B[i]);
    for(i=1;i<=N;i++){
        max=0;
        for(j=1;j<=N;j++){
            if(A[i]==A[j]|i==j)
            
                max=(max>B[j])?max:B[j];
                    }
        printf("%d ",max);
    }   
    
    return 0;
}
