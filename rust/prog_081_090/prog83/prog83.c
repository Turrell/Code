/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */

Problem 83: Discrete Fourier Transform

To compute the discrete Fourier transform of a vector of length n requires that you multiply the vector on the left
by an n x n matrix. Each element of the matrix contains a single complex number.  You computed the Fourier matrix
in a previous assignment.

In this transform, for now, we will not divide each resulting complex number by n.

In this problem you will read in 8 floating point numbers from a file. The name of this file will be given on the
command line as argv[1].  Each of these values represents the real value of a single complex number. The imaginary
portion of the number would be initialized to zero.

Compute the Fourier transform of the vector containing these 8 values and output the real and imaginary values of
the resulting (transformed) vector.

Your program should not be completely written in a single file. It should have a main function written in main.c. It
should have a complex.h and a complex.c file.

It should also have a Makefile.

When you submit your solution to the grader, you should submit all four files.

When you pass in your paper solution to me, you should pass in a paper copy of all four files to me.

You should create an array of structs.

You should create vectors of structs.

This is not a difficult coding assignment. You can do it.

If you need some help from me, ask.

Best wishes.

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
