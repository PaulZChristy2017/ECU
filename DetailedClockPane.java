import java.util.Calendar;
import java.util.Collections;
import java.util.GregorianCalendar;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Line;
import javafx.scene.text.Text;
import javafx.collections.ObservableList;
import javafx.geometry.Point2D;
import javafx.scene.Node;

// public class DetailedClockPane
public class DetailedClockPane extends Pane {

	private int hour;
	private int minute;
	private int second;

	// Clock pane's width and height
	private double width = 250;
	private double height = 250;

	// Construct a default clock with the current time
	public DetailedClockPane() {

		setCurrentTime();

	} // end of DetailedClockPane()

	// Construct a clock with specified hour, minute, and second
	public DetailedClockPane( int hour, int minute, int second ) {

		this.hour = hour;
		this.minute = minute;
		this.second = second;
		paintClock();

	} // end of DetailedClockPane( int hour, int minute, int second )

	// Return hour
	public int getHour() {

		return hour;

	} // end of getHour()

	// Set a new hour
	public void setHour( int hour ) {

		this.hour = hour;
		paintClock();

	} // end of setHour( int hour )

	// Return minute
	public int getMinute() {

		return minute;

	} // end of getMinute()

	// Set a new minute
	public void setMinute( int minute ) {

		this.minute = minute;
		paintClock();

	} // end of setMinute( int minute )

	// Return second
	public int getSecond() {

		return second;

	} // end of getSecond()

	// Set a new second
	public void setSecond( int second ) {

		this.second = second;
		paintClock();

	} // end of setSecond( int second )

	// Return clock pane's width
	public double getW() {

		return width;

	} // end of getWidth()

	// Set clock pane's width
	public void setW( double width ) {

		this.width = width;
		paintClock();
	
	} // end of setWidth()

	// Return clock pane's height
	public double getH() {

		return height;

	} // end of getHeight()

	// Set clock pane's height
	public void setH( double height ) {

		this.height = height;
		paintClock();

	} // end of setHeight()

	// Set the current time for the clock
	public void setCurrentTime() {

		// Construct a Calendar for the current date and time
		Calendar Calendar = new GregorianCalendar();

		// Set current hour, minute, and second
		this.hour = Calendar.get( Calendar.HOUR_OF_DAY );
		this.minute = Calendar.get( Calendar.MINUTE );
		this.second = Calendar.get( Calendar.SECOND );

		// Repaint the clock
		paintClock();		
		
	}  // end of setCurrentTime()

	// Paint the clock
	protected void paintClock() {

		// Initialize clock parameters
		double clockRadius = Math.min( width, height ) * 0.8 * 0.5;
		double centerX = width / 2;
		double centerY = height / 2;
		Point2D center = new Point2D( centerX, centerY );

		// Draw circle
		Circle circle = new Circle( centerX, centerY, clockRadius );
		circle.setFill( Color.WHITE );
		circle.setStroke( Color.BLACK );

		// Draw numbers on the clock
		Text[] numbers = new Text[12];
		for ( int counter = 0; counter < 12; counter++ ) {

			int time = ( counter + 3 > 12 ) ? counter + 3 - 12 : counter + 3;
			Point2D clockNumber = new Point2D(

				centerX + clockRadius * Math.cos( counter * 2 * Math.PI / 12 ),
				centerY + clockRadius * Math.sin( counter * 2 * Math.PI / 12 ) );

			clockNumber = getClockNumbers( center, clockNumber, 0.82 );

			numbers[counter] = new Text( clockNumber.getX() - ( clockRadius * 0.03125 ),
				clockNumber.getY() + ( clockRadius * 0.025 ), "" + time );

		} // end of for loop

		// Draw dashes on the clock
		Line[] dashes = new Line[60];
		for ( int counter = 0; counter < dashes.length; counter++ ) {

			Point2D start = new Point2D(

				centerX + clockRadius * Math.cos( counter * 2 * Math.PI / 60 ),
				centerY + clockRadius * Math.sin( counter * 2 * Math.PI / 60 ) );

			double coefficient = ( counter % 5 == 0 ) ? 0.91 : 0.955;
			Point2D end = getClockDashes( center, start, coefficient );

			dashes[counter] = new Line( start.getX(), start.getY(), end.getX(), end.getY() );

			

		} // end of for loop


		// Draw second hand
		double secondLength = clockRadius * 0.8;
		double secondX = centerX + secondLength * Math.sin( second * ( 2 * Math.PI / 60 ) );
		double secondY = centerY - secondLength * Math.cos( second * ( 2 * Math.PI / 60 ) );
		Line secondLine = new Line( centerX, centerY, secondX, secondY );
		secondLine.setStroke( Color.RED );

		// Draw minute hand
		double minuteLength = clockRadius * 0.65;
		double minuteX = centerX + minuteLength * Math.sin( minute * ( 2 * Math.PI / 60 ) );
		double minuteY = centerY - minuteLength * Math.cos( minute * ( 2 * Math.PI / 60 ) );
		Line minuteLine = new Line( centerX, centerY, minuteX, minuteY );
		minuteLine.setStroke( Color.BLUE );

		// Draw hour hand
		double hourLength = clockRadius * 0.5;
		double hourX = centerX + hourLength * Math.sin( hour * ( 2 * Math.PI / 60 ) );
		double hourY = centerY - hourLength * Math.cos( hour * ( 2 * Math.PI / 60 ) );
		Line hourLine = new Line( centerX, centerY, hourX, hourY );
		hourLine.setStroke( Color.GREEN );

		// Add nodes to pane
		getChildren().clear();
		ObservableList< Node > list = getChildren();
		list.add( circle );
		Collections.addAll( list, dashes );
		Collections.addAll( list, numbers );
		list.addAll( secondLine, minuteLine, hourLine );
		
	} // end of paintClock()

	// Get the numbers for the clock
	public Point2D getClockNumbers( Point2D number1, Point2D number2, double coefficient ) {

		double deltaX = number2.getX() - number1.getX();
		double deltaY = number2.getY() - number1.getY();

		return new Point2D(

						number1.getX() + coefficient * deltaX,
						number1.getY() + coefficient * deltaY );

	} // end of getClockNumbers( Point2D number1, number2, double coefficient )

	// Get the numbers for the clock
	public Point2D getClockDashes( Point2D dash1, Point2D dash2, double coefficient ) {

		double deltaX = dash2.getX() - dash1.getX();
		double deltaY = dash2.getY() - dash1.getY();

		return new Point2D(

						dash1.getX() + coefficient * deltaX,
						dash1.getY() + coefficient * deltaY );

	} // end of getClockNumbers( Point2D number1, number2, double coefficient )

	public void update() {
		
		setCurrentTime();
		paintClock();

	}

} // end of public class DetailedClockPane
