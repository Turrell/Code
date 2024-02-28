/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */

Problem 80: Building the Fourier Matrix

The construction of the n x n Fourier Matrix was discussed in class. The purpose of this assignment if for you to
input a number n from the command line with n being a power of two and then have your program construct the n x
n Fourier Matrix. In this assignment you should use your complex.h file and your complex.c file from problem 79
above. Recall that the Fourier matrix is a matrix of complex numbers. The real part is the cosine of  (2*PI)/n * i * j.
The imaginary part is the sine of (2*PI)/n * i * j.

This problem gives you an opportunity to practice building a multi-file program.

I want you to allocate your space for the n x n array using malloc. You should do this in such a way that will enable
you to use double subscripts: [ ] [ ]. Recall that this will require multiple calls to the malloc function not just one
call.  It is important to me that you understand this.

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
