/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */
/* Program 64: Square Deal                                                   */
/*                                                                           */
/* Input for this program will be two positive integers entered from the     */
/* keyboard via scanf. The first will be an odd integer N in the range of 3  */
/* to 15. N will be used as the size of a square array. The second integer   */
/* will be an initial value I. Both N and I will be small enough so the      */
/* I + N squared is less than 1000.                                          */
/*                                                                           */
/* Begin in the center of an N x N array, with the integer I. If I is prime, */
/* then print the number I in that position of the square. Otherwise,        */
/* print *** in that position. Move to the right one square, and test the    */
/* integer I+1 for primality.                                                */
/* Print I+1 if it is prime and *** if it is not. Proceed in a counter-      */
/* clockwise spiral through the square until the square is full of numbers   */
/* and ***. Then print the array.                                            */
/*                                                                           */
/* Example: If N=5 and I = 16 then your output should be:                    */
/*                                                                           */
/*                   ***   31   ***   29    ***                              */
/*                   ***  ***   19   ***   ***                               */
/*                   ***  ***  ***   17    ***                               */
/*                   ***  ***   23   ***   ***                               */
/*                   ***  37    ***  ***  ***                                */
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
  
  printf("\n\nHello World\n\n");

  
  return 0;


} // End Main
