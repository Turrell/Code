/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */

Program 76: Complex Number Module

I want you to create three files. The first file is called p76.c and it contains, among other things, the definition of the
main function. The second file is called complex.h and it contains declarations only. It also contains a type definition
(not a variable or a function definition). It is a struct that has two fields: one to hold the real part of a complex
number and the other field will hold the imaginary part of a complex number. This was discussed and presented in
class.  The third file contains the code for two extern functions. They are:

extern Complex Add_Complex ( �  )
extern Complex Multiply_Complex ( �  )

These two functions return a Complex, that is, a struct that contains the two fields (real, im).

Your main routine should prompt the user to enter the first complex number, then it should prompt the user to
enter a second complex number. Your program will then print out the addition of the two numbers followed by the
multiplication of the two numbers. ANSI C permits the return of a struct.

You can do this.

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
