/*****************************************************************************/
/*                                                                           */
/* Programmer: Tyrone Turrell                                                */
/* C Programs Jim Cannings Programming Problems                              */
/*                                                                           */
/*                                             */
/* Created: SEP 25 2020                                                      */
/*                                                                           */                                                                          */
/* Program 65: Cube Crawling	Taken from a Programming Competition at WPI    */
/*                                                                           */
/* Honor is ready. Her new ship Punisher is capable of interstellar flight   */
/* and she wants to test its performance. In simple terms, interstellar      */
/* flight is accomplished by crawling around the faces of an imaginary       */
/* 3-dimensional cube of edge length 2L. Not that L is an integer parameter  */
/* based on the power of a ship�s engine. Locations are represented as      */
/* (x, y, z) where x, y, and z are all non-negative integers.                */
/*                                                                           */
/* Your ship starts at location (L, 2L, L) in the middle of the top face of  */
/* this imaginary cube. In a hypercrawl, you select a direction (+/-), an    */
/* axis (x, y, or z), and a distance to travel. Once this distance has been  */
/* traversed, you can select a new direction and distance. If the ship       */
/* crosses an edge, it will immediately wrap around the edge to exist on the */
/* face neighboring that edge and continue traveling until the total distance*/
/* has been covered. In the figure, assume L is 10. The ship makes the       */
/* following moves:                                                          */
/*                                                                           */
/*               Move		                       New Location                  */ 
/*               -z   12	                     10 18 0                       */
/*               +x   34                       16 18 20                      */
/*               +y   1                        16 19 20                      */
/*                                                                           */
/* As the ship moves in the �z direction, it crosses an edge and wraps      */
/* around to the back face, now continuing for some distance in the �y      */
/* direction. When it stops, the ship is told to travel in the +x direction; */
/* this forces the ship to wrap around two cube edges, first changing        */
/* direction to +z and then to direction =x, eventually coming to rest on    */
/* the front face. Finally, there is a +y move. At no time can the ship stop */
/* exactly on an edge, because that would translate the ship to an alternate */
/* universe.                                                                 */
/*                                                                           */
/* You must write a program for the navicomputer that will enable Punisher   */
/* to determine the (x, y, z) coordinates of the final location of the ship  */
/* on the cube.                                                              */
/*                                                                           */
/* INPUT                                                                     */
/* The first line will be an integer L. You can assume that L >= 4. Note     */
/* that the cube has sides of length 2L. Each successive line of input will  */
/* contain three values separated by spaces: a direction(+/-), and axis      */
/* (x, y, or z) and a positive integer representing the distance to travel   */
/* in that direction. The final input will be a single �.� character.      */
/*                                                                           */
/* You can assume that no move will place the ship exactly on an edge of the */
/* cube. You can assume that all directions are valid (e.g., an invalid      */
/* direction from the top face is +y).                                       */
/*                                                                           */
/* OUTPUT                                                                    */
/* Your output will be three integers, separated by spaces, representing the */
/* final location.                                                           */
/*                                                                           */
/* Sample Input       Sample Output                                          */
/* 10  16  19  20     - z 12 + x 34 + y 1                                    */
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
