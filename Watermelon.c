#include<stdio.h>

int main()
{
    int w;
    printf("Enter the weight:\n");
    scanf("%d",&w);
    if(w%2==0&&w>2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}