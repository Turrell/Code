/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */
/* Problem 53: Close Enough for All Practical Purposes                       */
/*                                                                           */
/* This problem was taken from the First Annual Northeast Regional High      */
/* School Programming Contest Championship. The contest was held at Western   */
/* New England College on May 13, 1986.                                      */
/*                                                                           */
/* This program is not that difficult. For those of you who are math phobic  */
/* I believe you can handle this. Remember the textbook is your best friend. */
/* It is filled with the answers you seek. You are Columbo, Ellery Queen,    */
/* Agatha Cristi, and Sherlock Holmes all wrapped into one problem solving   */
/* machine. C�mon, don�t tell me you never heard of Columbo. You can do it. */
/* If you need to discuss this problem feel free to stop into my office. With */
/* help, you can become independent.                                          */
/*                                                                           */
/* The square root of a number A can be computed by successive approximations */
/* using the iterative formula                                                */
/*                                                                            */
/*    Xn+1 = (1/2) ( Xn  +  A/Xn )                                            */
/*                                                                            */
/* Starting with X1   =  1 as an initial approximation for the square root of */
/* A a new approximation X is computed using the above formula. This new       */
/* approximation, in turn, can be substituted in the formula to compute a     */
/* newer approximation of X.  This process can be continued until the square  */
/* of the new approximation is close enough to A, that is                     */
/*                                                                            */
/* | X2 � A | < e                                                            */
/*                                                                            */
/* where e is the prescribed degree of accuracy.                              */
/*                                                                            */
/* Write a program to compute the square root of a number using the procedure */
/* described above. The number and the level of accuracy will be specified as */
/* command line arguments.                                                    */
/*                                                                            */
/* If the program was launched with the following command line,               */
/*                                                                            */
/* bash>  a.out 	24 	.001                                                    */
/*                                                                            */
/* the output of your program should be a line that states something like     */
/* this:                                                                      */
/*                                                                            */
/* The square root of 24 is 4.899.                                            */
/*                                                                            */
/* Note: You should check out the function fabs in Appendix D.  Are you       */
/* getting away from distractions? Go to the library. Bring your mathematics  */
/* book. Do all the problems in the first four chapters.                      */
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
