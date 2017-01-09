/* 
   This subprogram is being provided by Ms. Tarver and will be used
   to generate the array of random numbers to be sorted.
*/

  int random(int seed) {
   //seed will be passed as an argument.
   int x; 
   //x will contain the result of the calculation using the seed passed in.
   x = (25179 * seed + 13849) % 65536;
   return x;
   // next time it will use x value as the seed.
}
