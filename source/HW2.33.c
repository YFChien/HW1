#include <stdio.h>
#include <stdlib.h>


    int main(void) 
    {
	    float a,b,c;
	    int d,e;
	    scanf("%f%f%f",&a,&b,&c);
	    scanf("%d%d",&d,&e);
	    float g = a+b+c+d+e;
	    printf("%f Total miles driven per day\n",a);
	    printf("%f Cost per gallon of gasoline\n",b);
	    printf("%f Average miles per gallon\n",c);
	    printf("%d Parking fee per day\n",d);
	    printf("%d Tolls per day\n",e);
	    printf("%f Total coat",g);
	    
	    
	return 0;
    }

