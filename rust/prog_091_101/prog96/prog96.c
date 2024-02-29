/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */

Program 96: Finite Space on the Heap

Although it may sound strange, I want you to write a program that is going to crash. Please write a program that
loops indefinitely and each time through the loop I want you to malloc up space for 1000 integers. The program
does nothing interesting, but I want you to get a sense that malloc reserves space dynamically and you only have a
finite amount of space. The general idea is something like this:

    while( 1 )
{
  p = (int *)malloc(1000 * sizeof(int));
}

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
