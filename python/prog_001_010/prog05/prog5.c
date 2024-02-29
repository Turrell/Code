/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/* Problem 5: Sum of Two Values                                              */
/* Created: SEP 25 2020                                                      */
/*                                                                           */
/* Write a C program that reads two integer values from the keyboard via the */
/* scanf function, then adds them together, stores the result into a var-    */
/* iable called sum, and then prints out the value of the variable sum.      */
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

  int num1;
  int num2;
  int sum;

  printf("\n\nPlease enter an integer: \n");

  scanf("%d", &num1);

  printf("\n\nPlease enter an integer: \n");

  scanf("%d", &num2);

  sum = num1 + num2;
  
  printf("\nThe number is: %d\n\n", sum);

  return 0;


} // End Main
