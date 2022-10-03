#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a == (2*b))
    {
        printf("%d the first is a multiple of the second", a);
    }
    else
    {
        printf("%d the first is not a multiple of the second", a);
    }
    return 0;
}

