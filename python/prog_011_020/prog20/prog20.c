/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */
/* Problem 20: Area of a Circle                                              */
/* In grade school you learned that the area of a circle is pi * r2  . Write */
/* a C program that inputs a single floating point number representing the   */
/* value of the radius r. Your program should output the area of the circle  */
/* with a radius r. Now, the only problem is what value should you use for   */
/* pi? Hmmm.  Well, inside of math.h is a the following line:                */
/*              #define M_PI 3.14159265358979323846 /* pi                    */
/* so you need to include math.h and then use M_PI in an expression to       */
/* calculate the area. I do not want you to type in this #define. I want you */
/* to include math.h. However, with the �ansi option you will need to add   */
/* another option, otherwise things won�t go too well.                      */
/*                                                                           */
/* Try to build this program using: 	gcc �ansi   �Wall    p17.c.           */
/*                                                                           */
/* You should see that trouble exists. It will not recognize M_PI even though*/
/* it is inside math.h. To get past this, you need to build the program by   */
/* either dropping the �ansi option or by adding the �D_GNU_SOURCE option.  */
/* I prefer you choose the latter:                                           */
/*                                                                           */
/*       	gcc �ansi �Wall �D_GNU_SOURCE p17.c                              */
/*                                                                           */
/* You do not need to build the program with the �lm option since you are   */
/* not missing any definitions from libm.a.                                  */
/* You need to understand the previous sentence. Make certain that you do    */
/* understand it.                                                            */
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
