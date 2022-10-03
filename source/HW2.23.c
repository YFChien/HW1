#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if( (0 == a % 2))
    {
        printf("%d is even", a);        
    }
    else
    {
        printf("%d a is odd", a);    
    }
        
    //system("pause");
    return 0;
}

