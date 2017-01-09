/**********************************************************

Author: Paul Christy
Course: Advanced Java
Date: 2/23/16
Program Summary: This program will test fan.java

***********************************************************/

public class Fan {

	// default speed is SLOW
	private int speed = 1;
  	final public static int SLOW = 1;
  	final public static int MEDIUM = 2;
  	final public static int FAST = 3; 

	// Fan is off
  	private boolean on = false;

	// default radius of fan is 5
  	private double radius = 5;

	// default color of fan is blue
  	private String color = "blue";

   public Fan() {} // End of Public Fan

	// Get whether the fan is turned off or on
	public boolean getFanPower() {
		return on;
	} // End of public boolean getFanPower()

	// Set whether the fan is turned off or on
	public void setFanPower( boolean power ) {
		on = power;
	} // End of public void setFanPower( boolean power )

  	// This sends the output to TestFan.java
  	public String toString() {

		// fan is turn on
		if ( on == true ) {
		
			// This section will show the fan speed
			// as Slow, Medium, or Fast
			String fanSpeed = Integer.toString( speed );

			// if Speed is 1 the Output will display Slow			
			if ( speed == 1 )
				fanSpeed = "Slow";

			// if Speed is 2 the Output will display Medium
			else if ( speed == 2 )
				fanSpeed = "Medium";

			// if Speed is 3 the Output will display Fast
			else
				fanSpeed = "Fast";

			// return fan speed, fan color, and fan radius
			return ( "\nFan Color is: " + color + 
				"\nFan Speed is: " + fanSpeed +
				"\nFan Radius: " + radius );

		} // End of if ( on == true )

		// fan is turned off
		// return fan color, fan radius, fan is off
		return ( "\nFan Color is: " + color + 
			"\nFan Radius: " + radius +
			"\nFan is off" );

  	} // End of public String toString()

	// Get the color of the fan
	public String getFanColor() {
		return color;
	} // End of public getFanColor()

  	// Set the color of the fan
  	public void setFanColor ( String newFanColor  ) {
    	color = newFanColor;
  	} // End of public void setFanColor()

	// Get the radius of the fan
	public double getFanRadius() {
		return radius;
	} // public double getFanRadius()

  	// Set the radius of the fan
  	public void setFanRadius (double newFanRadius) {
    	radius = newFanRadius;
  	} // End of public void setFanRadius ( double newFanRadius )

	// Get the speed of the fan.
	public double getFanSpeed() {
		return speed;
	} // End of public double getFanSpeed()

	// Set the speed of the fan.
	public void setFanSpeed( int newFanSpeed ) {
		speed = newFanSpeed;
	} // End of public void setFanSpeed( int newFanSpeed )

} // End of public class Fan
