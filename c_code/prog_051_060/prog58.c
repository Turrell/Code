/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */
/* Program 58 : Guardian Angles                                              */
/*                                                                           */
/* Write a program that reads in three positive integers.The three numbers   */
/*represent the lengths of the sides of a triangle.You are to decide what    */
/* kind of triangle it is :                                                  */
/*                                                                           */
/*    � Scalene � no sides equal                                           */
/*        � Isosceles � exactly two equal sides                            */
/*            � Equilateral � all sides equal                              */
/*                � Right triangle � Pythagorean theorem is true.          */
/*        � Invalid triangle � see hint below.                             */
/*                                                                          */
/* The Pythagorean Theorem can be stated as follows : the sum of the        */
/* squares of any two sides is equal to the square of the third side if and */
/* only if the triangle is a right triangle.                                */
/*                                                                          */
/* Therefore, there are essentially 5 different triangle types :            */
/*                                                                          */
/* scalene, isosocles, equilateral, scalene right, and isosceles right.     */
/* Your output should be the most relevant type.                            */
/*                                                                          */
/* To determine if the given vertices from a valid triangle you can use the */
/* triangle inequality(google this). The shortest distance between two      */
/* points is a straight line.                                               */
/* Example input:                                                           */
/*                                                                          */
/*                   3 4 5 34 17 38 3 4 10                                  */
/*                                                                          */
/* Expected output:                                                         */
/*                                                                          */
/*                   3 4 5    is a scalene right triangle                   */
/*                   34 17 38 is a scalene triangle                         */
/*                   3 4 10   is not a triangle                             */
/*                                                                          */
/*                                                                          */
/* Approximate Completition Time:  1 mins                                    */
/*                                                                           */
/* UPDATED:                                                                  */
/*                                                                           */
/*****************************************************************************/



#include <stdio.h> 	                //for input/output

                                                                                                           // Begin Main
                                                                                                           int main(int argc, char *argv[])
{
  
  printf("\n\nHello World\n\n");

  
  return 0;


} // End Main
