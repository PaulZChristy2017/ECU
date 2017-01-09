
/**********************************************************

Author: Paul Christy
Course: Advanced Java
Date:   4/7/16
Program Summary: This program is a basic calculator without
					  Exception Handling

***********************************************************/

// Class CalculatorWithoutExceptionHandling
public class CalculatorWithoutExceptionHandling  { 

	// Main Method
	public static void main( String[] args )  { 

		// Check number of strings passed
		if ( args.length != 3 )  { 

			System.out.println();
			System.out.println(
				"Usage: java Calculator operand1 operator operand2");
			System.out.println("\nWrong input: " + args[0] );
			System.out.println();
			System.exit( 0 );

		} // end of if

		String args0 = new String ( args[0] );

		// Check to see if user's first number is valid
		for ( int counter = 0; counter < args0.length(); counter++ ) { 

			if ( !Character.isDigit( args0.charAt(counter) ) )  { 

				System.out.println();
				System.out.println("Wrong input: " + args[0] );
				System.out.println();
				System.exit( 0 );

			} // end of if

		} // end of for

		String args2 = new String ( args[2] );
		
		// Check to see if user's second number is valid
		for ( int counter = 0; counter < args0.length(); counter++ ) { 

			if ( !Character.isDigit( args2.charAt(counter) ) )  { 

				System.out.println();
				System.out.println("Wrong input: " + args[2] );
				System.out.println();
				System.exit( 0 );

			} // end of if

		} // end of for


		// The result of the operation
		int result = 0;
		double divisionResult = 0;

		// Determine the operator
		switch ( args[1].charAt(0) )  { 

			// Addition
			case '+': 	result = Integer.parseInt( args[0] ) +
									 Integer.parseInt( args[2] );

						 	// Display result
							System.out.println();
						 	System.out.println( args[0] + ' ' + args[1] + ' ' + args[2]
								+ " = " + result );
							System.out.println();
						 	break;

			// Subtraction
			case '-': 	result = Integer.parseInt( args[0] ) -
									 	Integer.parseInt( args[2] );

						 	// Display result
							System.out.println();
						 	System.out.println( args[0] + ' ' + args[1] + ' ' + args[2]
								+ " = " + result );
							System.out.println();
						 	break;

			// Multiplication
			case '.':	result = Integer.parseInt( args[0] ) *
									 	Integer.parseInt( args[2] );

						 	// Display result
							System.out.println();
						 	System.out.println( args[0] + ' ' + args[1] + ' ' + args[2]
								+ " = " + result );
							System.out.println();
						 	break;

			// Division
			case '/':	divisionResult = (double)Integer.parseInt( args[0] ) /
									           Integer.parseInt( args[2] );

							if ( Integer.parseInt( args[2] ) == 0 )  { 

							 	System.out.println("\nIntger can't be divided by zero.\n");
							
							 	System.exit(0);

							} // end of if

							else  { 

								// Display result
								System.out.println();
						 		System.out.println( args[0] + ' ' + args[1] + ' ' + args[2]
									+ " = " + divisionResult );
								System.out.println();
						  		break;

							} // end of else

			default: System.out.println("\nWrong operator: " + args[1] );

		} // end of switch

	} // end of main

} // end of Calculator