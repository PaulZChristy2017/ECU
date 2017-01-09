

/**********************************************************

Author: Paul Christy
Course: Advanced Java
Date:   4/7/16
Program Summary: This program is a basic calculator with
					  Exception Handling

***********************************************************/

// class CalculatorWithExceptionHandling
public class CalculatorWithExceptionHandling   { 

	// Main Method 
	public static void main( String[] args )   { 

		// Check number of strings passed
		if ( args.length != 3 )   { 

			System.out.println();
			System.out.println(
				"Usage: java Calculator operand1 operator operand2");
			System.out.println("\nWrong input: " + args[0] );
			System.out.println();
			System.exit( 0 );

		} // end of if

		String args0 = new String ( args[0] );

		// Check to see if user's first number is valid
		for ( int counter = 0; counter < args0.length(); counter++ )  { 

			// Try to parse user's first number
			try  { 

        		int numArgs0 = Integer.parseInt(args[0]);

    		} // end of try

			// User didn't enter a number
			catch ( NumberFormatException exception )  { 

				System.out.println("Wrong input: " + args0 );
				System.exit( 0 );

    		} // end of catch

		} // end of for

		String args2 = new String ( args[2] );
		
		// Check to see if user's first number is valid
		for ( int counter = 0; counter < args0.length(); counter++ )  { 

			// Try to parse user's first number
			try  { 

        		int numArgs2 = Integer.parseInt(args[2]);

    		} // end of try

			// User didn't enter a number
			catch ( NumberFormatException exception )  { 

				System.out.println("Wrong input: " + args2 );
				System.exit( 0 );

    		} // end of catch

		} // end of for
	
		// The result of the operation
		int result = 0;
		double divisionResult = 0;

		// Determine the operator
		switch ( args[1].charAt(0) )   { 

			// Addition
			case '+': 	result = Integer.parseInt( args[0] ) +
									 	Integer.parseInt( args[2] );

						 	// Display result
						 	System.out.println( args[0] + ' ' + args[1] + ' ' + args[2]
								+ " = " + result );
						 	break;

			// Subtraction
			case '-': 	result = Integer.parseInt( args[0] ) -
									 	Integer.parseInt( args[2] );

						 	// Display result
						 	System.out.println( args[0] + ' ' + args[1] + ' ' + args[2]
								+ " = " + result );
						 	break;

			// Multiplication
			case '.': 	result = Integer.parseInt( args[0] ) *
									 	Integer.parseInt( args[2] );

						 	// Display result
						 	System.out.println( args[0] + ' ' + args[1] + ' ' + args[2]
								+ " = " + result );
						 	break;

			// Division
			case '/':	try  { 

								// Check for division by 0  { 


									throw new ArithmeticException("Divisor can't be zero");

								} // end of if

								divisionResult = (double)Integer.parseInt( args[0] ) /
									           Integer.parseInt( args[2] );

						 	} // end of try

							// User is dividing by 0
							catch ( ArithmeticException excpetion )   { 

							 	System.out.println("Exception: an intger " +
							    	"can't be divided by zero ");
							
							 	System.exit(0);

						  	} // end of catch

						  	// Display result
						  	System.out.println( args[0] + ' ' + args[1] + ' ' + args[2]
							  	+ " = " + divisionResult );

						  	break;

			default: System.out.println("\nWrong operator: " + args[1] );


		} // end of switch

	} // end of main

} // end of Calculator
