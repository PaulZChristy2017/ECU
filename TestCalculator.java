/**********************************************************

Author: Paul Christy
Course: Advanced Java
Date:   4/7/16
Program Summary: This program will convert a file's 
					  next-line bracket style to end-of-line
					  bracket style.

***********************************************************/

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

// class TestCalculator
public class TestCalculator {

	// Main Method
	public static void main( String[] args ) {

		// Check number of strings passed
		if ( args.length != 1 ) {

			System.out.println("\nUsage: java TestCalculator\n");
			System.exit( 0 );
	
		} // end of if

		File fileName = new File( args[0] );

		// Check to see if File exists
		if ( !fileName.exists() ) {

			System.out.println("\n" + fileName + " does not exist\n");
				System.exit( 0 );

		} // end of if

		StringBuilder stringBuilder = new StringBuilder();

		// Try to find the file the file the user input
		try {

			Scanner input = new Scanner( fileName );

			while ( input.hasNext() ) {

				String string = input.nextLine();

				if ( string.contains("{") ) {

					stringBuilder.append(" { \n");
	
				} // end of if

				else {

					stringBuilder.append("\n" + string );

				} // end of else

			} // end of while

		} // end of try

		// The file user input was not found
		catch ( FileNotFoundException exception ) {

			exception.printStackTrace();

		} // end of catch

		// Try to find the file the file the user input
		try {

			PrintWriter printWriter = new PrintWriter( fileName );
			printWriter.write( stringBuilder.toString() );
			printWriter.close();

		} // end of try

		// The file user input was not found
		catch ( FileNotFoundException exception ) {

			exception.printStackTrace();

		} // end of catch

		System.out.println( stringBuilder );

	} // end of main

	// Get the index of the string
	public static int getIndeex( String string, char character ) {

		for ( int counter = 0; counter < string.length(); counter++ ) {
			
			if ( character == string.charAt( counter ) ) {
	
				return counter;
		
			} // end of if

		} // end of for

		return -1;

	} // end of getIndex

} // end of TestCalculator
