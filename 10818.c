#include<stdio.h>

int main(void)
{
    int n=0, count=0, min=100000, max=-100000; # 최댓값 최솟값 설정
    scanf("%d", &count);
    for(int i=0;i<count;i++)
    {
        scanf("%d", &n);
        if(n>max)
            max=n;
        if(n<min)
            min=n;
    }
    printf("%d %d", min,max); 
    return 0;
}