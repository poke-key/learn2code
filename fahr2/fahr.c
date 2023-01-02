#include <stdio.h>
#include <stdlib.h>

//#define DEBUG

float f2c(float) ;

/* print Fahrenheit-CElsius table for fahr = 0,20, ..., 300 */
void main (int argc, char **argv)
{
    float fahr, celsius; 
    int lower = 0 ;
    int upper = 300 ;
    int step = 20 ;

    if ( argc == 2 ) {
        printf("%s\n", argv[1]);
        upper = atoi(argv[1]) ;
    }


    //lower = 0;          /* lower limit of temperature table */
    //upper = 300;        /* upper limit */
    //step = 20;          /* step size */

    fahr = lower; 
    /* run a while loop until we reach upper limit */
    while (fahr <= upper) { 
        printf ("%3.0f %6.2f\n", fahr, f2c(fahr));
        fahr = fahr + step;
    }

    // when while loop ends
}

float f2c(float f){
#ifdef DEBUG    
    printf("debug %3.0f\n", f);
#endif
    return ((5.0/9.0) * (f-32.0));
}