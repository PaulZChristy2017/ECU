/********************************************************
Author: Paul Christy
Course: Advanced Java
Date: 1/21/16
Program Summary: This program will count and give total 
value of coins that are given.
********************************************************/

import java.util.Scanner;

public class MoneyMachine {

	static Scanner sc = new Scanner( System.in );

	public static void main( String[] args ) {

		System.out.println();
		System.out.println("\nWelcome to the money machine!!!");

		// Enter how many half dollars you have.
		System.out.print("\nHow many half dollars do you have?\n");
		int halfDollars = sc.nextInt(); 

		// Enter how many quarters you have.
		System.out.print("\nHow many quarters do you have?\n");
		int quarters = sc.nextInt(); 

		// Enter how many dimes you have.
		System.out.print("\nHow many dimes do you have?\n");
		int dimes = sc.nextInt(); 

		// Enter how many nickels you have.
		System.out.print("\nHow many nickels do you have?\n");
		int nickels = sc.nextInt(); 

		// Enter how many pennies you have.
		System.out.print("\nHow many pennies do you have?\n");
		int pennies = sc.nextInt(); 
		System.out.println();

		System.out.println();
		System.out.println("You entered the following money: ");

		// The following sections will display the output.
		// This section will the display the output for half dollars.
		if ( halfDollars == 1 )
			System.out.print(halfDollars + " half dollar\n");
		else if ( halfDollars == 0 )
			;
		else 
			System.out.print(halfDollars + " half dollars\n");

		// This section will the display the output for quarters.
		if ( quarters == 1 )
			System.out.print(quarters + " quarter\n");
		else if ( quarters == 0 )
			;
		else 
			System.out.print(quarters + " quarters\n");

		// This section will the display the output for dimes.
		if ( dimes == 1 )
			System.out.print(dimes + " dime\n");
		else if ( dimes == 0 )
			;
		else 
			System.out.print(dimes + " dimes\n");

		// This section will the display the output for nickels.
		if ( nickels == 1 )
			System.out.print(nickels + " nickel\n");
		else if ( nickels == 0 )
			;
		else 
			System.out.print(nickels + " nickels\n");

		// This section will the display the output for pennies.
		if ( pennies == 1 )
			System.out.print(pennies + " penny\n");
		else if ( pennies == 0 )
			;
		else 
			System.out.print(pennies + " pennies\n");

		// number will add up the total number of coins
		// value will up the total value of the coins
		int number = halfDollars + quarters + dimes + nickels + pennies;
    	double value = .5 * halfDollars + .25 * quarters
 			+ .1 * dimes + .05 * nickels + .01 * pennies;
		System.out.print("\nThese \n" + number + " coins add up" +
			" to a total of $" + value + "\n");
		System.out.println();
5

	} // end of main program

} // end of public class MoneyMachine
