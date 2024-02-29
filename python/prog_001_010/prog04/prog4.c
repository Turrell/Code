/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/* Problem 4: The scanf Function                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */
/* Write a C program that reads in an integer value from the keyboard via    */
/* the scanf function and then prints it back onto the screen. You should    */
/* know that scanf seeks an address expression. For example, &n is an ad-    */
/* dress expression. You should also know that scanf returns a value. It is  */
/* either the number of successful conversions or an error code that is      */
/* typically EOF. Please read about the scanf function in Appendix D of your */
/* textbook.                                                                 */
/*                                                                           */
/* Approximate Completition Time:  1 mins                                    */
/*                                                                           */
/* UPDATED:                                                                  */
/*                                                                           */
/*****************************************************************************/



#include <stdio.h> 	                //for input/output

// Begin Main
int main( int argc, char *argv[ ] )
{
  int num;

  printf("\n\nPlease enter an integer: \n");

  scanf("%d", &num);

  printf("\nThe number is: %d\n\n", num);

  
  return 0;


} // End Main
