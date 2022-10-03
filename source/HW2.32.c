#include <stdio.h>
#include <stdlib.h>


    int main(void) 
    {
	    float a;
	    float b;
	    scanf("%f%f",&a,&b);
	    float d=b*b;
	    float c = a / d;
	    
	    if(c <= 18.5)
	    {
	       printf("%f Underwright",c);   
	    }
	    if((18.5 < c) && (c < 24.9))
	    {
	       printf("%f Normal",c);  
	    }
	    if((25 < c) && (c < 29.9))
	    {
	       printf("%f Overwight",c);
	    }
	    if (c>30)
	    {
	       printf("%f Obese",c);
	    }
	return 0;
    }

