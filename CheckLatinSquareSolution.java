/**********************************************************
Author: Paul Christy
Course: Advanced Java
Date: 2/15/16
Program Summary: This program will "solve" a Latin Square
like the examples below.
***********************************************************/

/*
This Should Work
+---+---+---+
| A | B | C | 
+---+---+---+
| B | C | A |
+---+---+---+
| C | A | B |
+---+---+---+

This Should Fail
+---+---+---+---+---+
| A | B | C | D | E |
+---+---+---+---+---+
| B | A | D | E | C |
+---+---+---+---+---+
| C | D | B | A | E |
+---+---+---+---+---+
| D | E | A | C | B |
+---+---+---+---+---+
| E | C | E | B | A |
+---+---+---+---+---+

*/

import java.util.Scanner;

public class CheckLatinSquareSolution {
    
	public static void main(String[] args) {

		// Get size of Latin Square from user.
		Scanner input = new Scanner(System.in);
      System.out.println("\nEnter the size of the Latin Square: ");
      int sizeOfLatinSquare = input.nextInt();

		// sizeOfLatinSquare is based on size of Alphabet
      while ( ( sizeOfLatinSquare < 1 ) || ( sizeOfLatinSquare > 26 ) ) {
      	System.out.println("\nThe Latin Square must be between 1 and 26");
         System.out.println("\nPlease enter ths size of the Latin Square: ");
         sizeOfLatinSquare = input.nextInt();
      } // End of while loop
      
		// Enter a Latin Square.
		System.out.println("\nPlease enter a Latin Square to be checked: ");		
      char[][] latinSquare = new char[sizeOfLatinSquare][sizeOfLatinSquare];
		
      for ( int row = 0; row < latinSquare.length; row++ ) {
      	for ( int column = 0; column < latinSquare.length; column++ ) {
         		latinSquare[row][column] = input.next().charAt(0);

					// This checks to see if user the entered valid letters 
					// based on the size of the Latin Square.
					if ( !isLetterValid( latinSquare[row][column], sizeOfLatinSquare ) ) {
						System.out.println("\nWrong input: the letters must be from " 
						+ 'A' + "-" + (char)('A' + latinSquare.length - 1 ) );
         			System.exit(0);
					} // End of If Statement

      	} // End of inner for loop
		} // End of outer for loop

		// Tells if the input is a Latin Square   
      System.out.println(checkLatinSquare( latinSquare ) 
      	? "\nThe input is a Latin Square" 
         : "\nThe input is not a Latin Square");

	} // End of public static void main   
   
	// This section will check to see if the Latin Square is valid or not 
	public static boolean checkLatinSquare( char[][] latinSquare ) {
        
		// Check to see if every row has unique letters
      for ( int row = 0; row < latinSquare.length; row++ ) {
      	if ( !isRowValid( latinSquare, row ) )
         	return false;
        	} // End of for loop
        
		// Check to see if every column has unique letters
   	for ( int column = 0; column < latinSquare.length; column++ ) {
   		if ( !isColumnValid( latinSquare, column ) )
      		return false;
   	} // End of for loop
        
		return true; // if letters are unique in the rows and columns return true
   }
   
	// This section will check to see if the row is valid. 
	public static boolean isRowValid( char[][] latinSquare, int row ) {
        
    	boolean[] checkLetter = new boolean[latinSquare.length];
        
      for ( int checkRow = 0; checkRow < latinSquare.length; checkRow++ ) {

			// If the row has the same letter in it more than once it will
			// return false, which will say the input is not a Latin Square.
      	int letterRow = latinSquare[row][checkRow] - 'A';
         if ( checkLetter[letterRow] )
         	return false;

			// If the row does not have a letter in it more than once it will
			// return true, which will say the input is a Latin Square.
         else
         	checkLetter[letterRow] = true;

        } // End of for loop
        
		return true; // if letters are unique in the rows return true

	} // End of public static boolean isRowValid
   
	// This section will check to see if the column is valid. 
	public static boolean isColumnValid( char[][] latinSquare, int column ) {
        
		boolean[] checkLetter = new boolean[latinSquare.length];
        
		for ( int checkColumn = 0; checkColumn < latinSquare.length; checkColumn++ ) {
      	int letterColumn = latinSquare[checkColumn][column] - 'A';

			// If the column has the same letter in it more than once it will
			// return false, which will say the input is not a Latin Square.
         if ( checkLetter[letterColumn] )
         	return false;

			// If the column does not have a letter in it more than once it will
			// return true, which will say the input is a Latin Square.
         else
         	checkLetter[letterColumn] = true; 

		} // End of for loop
        
		return true; // if letters are unique in the columns return true

	} // End of public static boolean isColumnValid
   
	// This section will check to see if the letters are in the correct
	// alphabetical range based on the size of the Latin Square the user entered.
	public static boolean isLetterValid( char letter, int sizeOfLatinSquare ) {

      return ( ( letter >= 'A' ) && ( letter <= 'A' + sizeOfLatinSquare - 1 ) );

    } // End of public static boolean isLetterValid
    
} // End of public class CheckLatinSquareSolution
