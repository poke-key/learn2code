#include <stdio.h>
#include <stdlib.h>
#include "fahr2.h"

typedef enum {false,true} boolean; 


/* print Fahrenheit-CElsius table for fahr = 0,20, ..., 300 */
void main (int argc, char **argv)
{
  int fahr ;

  boolean myBool = true ;

  if ( myBool == true ) {
    printf("myBool is  true\n") ;
    printf("true -> %d false -> %d\n", true, false) ;
  }
  else {
    printf("myBool is  false\n") ;
  }

  

  //for ( fahr = LOWER; fahr <= UPPER; fahr+=STEP) {
    //printf ("%d %6.2f\n", fahr, (5.0/9.0) * (fahr-32.0));
  //}
}