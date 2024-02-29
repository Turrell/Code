/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */

Program 85: Alligators and Ducks

Suppose there are n ducks floating on the pond in a circle. The pond is also home for an alligator with a fondness for
ducks. Beginning at the 1st position, the alligator counts around the circle and eats every mth  duck (the circle closing
as ducks are eaten). For example, the eaten order when n=8, m = 4 is

5	1  6  3  2  4  8  7 as shown:


















The fifth duck is the first on the menu, the first duck is second, etc. Write a program which prints out the order of
disappearance of the ducks given n (number of ducks) and m (inteval to the next duck to be eaten) to the screen. At
least one blank must separate each number. The values of m and n are to be entered from the keyboard via standard
input. You should use malloc to create the space for the m ducks.

/*                               */
/* Approximate Completition Time:  1 mins                                    */
/*                                                                           */
/* UPDATED:                                                                  */
/*                                                                           */
/*****************************************************************************/



#include <stdio.h> 	                //for input/output

// Begin Main
int main( int argc, char *argv[ ] )
{
  
  printf("\n\nHello World\n\n");

  
  return 0;


} // End Main
