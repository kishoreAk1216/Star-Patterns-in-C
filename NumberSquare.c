//NumberSquare
#include <stdio.h>

int main()
{
    int i,j,n,count=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }

    return 0;
}