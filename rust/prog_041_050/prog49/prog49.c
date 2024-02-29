/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */
/* Program 49 : Bits of Fun                                                  */
/*                                                                           */
/* Write a C program that reads in a list of integers between                */
/* -20000 and 20000                                                          */
/* from a file named testdata47.Your program does not know how many integers */
/* there are in the file.Your program reads these integers one by one and    */
/* after each integer is read, it will then print out the exact number of 1s */
/* that exists in the number�s two�s complement binary representation.You   */
/* will need a loop to read in the number from the file until end of file is  */
/* determined.You will need another loop � inside this loop � to process    */
/* each bit with a given number.One strategy could be to test the rightmost  */
/* bit.See if it is a 1 or a 0. You can do this by seeing if the number is an */
/* odd number or not .If the number is odd, then a 1 exists in the rightmost  */
/* position.You can then rely upon C�s right shift operator to move all of   */
/* the bits to right one position.You could enter the innermost loop          */
/*        sizeof(int) * 8 times.                                              */
/* Do you understand these words? Remember: The right shift operator in C     */
/* does not guarantee that a 0 bit will be rolled in on the left side.You     */
/* could test to see if the number is negative or not and use a left shift    */
/* operator instead.The left shift operator in C always guarantees a 0 is     */
/*  rolled in.                                                                */
/*                                                                            */
/*          If the input was :                                                */
/*                                                                            */
/*          53 32 1 44                                                        */
/*                                                                            */
/*          the output would be :                                             */
/*                                                                            */
/*          4 1 1 3                                                           */
/*                               */
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
