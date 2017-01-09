/**********************************************************
Author: Paul Christy
Course: Advanced Java
Date: 2/23/16
Program Summary: This program will test fan.java

***********************************************************/

public class TestFan {

	public static void main( String[] args ) {

		// Fan 1:
		//		Fan is On
		//		Max Speed
		// 	Radius of 10
		//		Color is Yellow
		Fan fan1 = new Fan();
		fan1.setFanPower( true );
		fan1.setFanSpeed( fan1.FAST );
		fan1.setFanRadius(10);
		fan1.setFanColor("Yellow");
		System.out.println("\nFan 1: " + fan1.toString() );

		// Fan 2:
		//		Fan is Off
		//		Medium Speed
		//		Radius of 5
		// 	Color is Blue
		Fan fan2 = new Fan();
		fan2.setFanPower( false );
		fan2.setFanSpeed( fan2.MEDIUM );
		fan2.setFanRadius(5);
		fan2.setFanColor("Blue");
		System.out.println("\nFan 2: " + fan2.toString() );
		System.out.println();

	} // End  of main program

} // End of public class TestFan
