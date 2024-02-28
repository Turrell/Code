/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                                                           */
/* Created: SEP 25 2020                                                      */
/*                                                                           */
/*  Program 70 : Walsh Transform                                             */
/*                                                                           */
/* In class we discussed the Walsh transform.It transforms a vector of       */
/* numbers into another vector of numbers.It does so by multiplying the      */
/* original vector on the left by a special matrix.It is called a Hadamard   */
/* matrix.A special matrix has the property that it is orthogonal.The matrix */
/* contains only 1�s and -1�s.                                              */
/*                                                                           */
/* For a 2 - element vector the matrix is a 2 x 2 of the form :              */
/*                                                                           */
/*         1 1                                                               */
/*                                                                           */
/*         1 -1                                                              */
/*                                                                           */
/* We discussed how to build the 4 x 4 and 8 x 8 matrices in class.We also   */
/* discussed in class how to write a divide and conquer function that will   */
/* create an n by n Hadamard matrix on the fly.Write a C program that first  */
/* inputs a value n that is the size of the problem.It then inputs five n    */
/* element vectors and computes their Walsh Transforms.Each element of the   */
/* vector should have a type double.Output the Walsh transform of each       */
/* vector.Remember to divide by n.Your program should call a function called */
/* Walsh with the following interface :                                      */
/*                                                                           */
/*    double *                                                               */
/*    walsh(double A[], int size);                                           */
/*                                                                           */
/* In doing this problem, make sure that you realize that the space for      */
/* answer matrix must be located on the heap and not on the run time stack.  */
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
