import java.util.Calendar;
import java.util.GregorianCalendar;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Line;
import javafx.scene.text.Text;

// public class ClockPane
public class ClockPane extends Pane {

	private int hour;
	private int minute;
	private int second;

	// Clock pane's width and height
	private double width = 250;
	private double height = 250;

	// Construct a default clock with the current time
	public ClockPane() {

		setCurrentTime();

	} // end of ClockPane()

	// Construct a clock with specified hour, minute, and second
	public ClockPane( int hour, int minute, int second ) {

		this.hour = hour;
		this.minute = minute;
		this.second = second;
		paintClock();

	} // end of ClockPane( int hour, int minute, int second )

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

		// Draw circle
		Circle circle = new Circle( centerX, centerY, clockRadius );
		circle.setFill( Color.WHITE );
		circle.setStroke( Color.BLACK );

		Text text1 = new Text( centerX - 5, centerY - clockRadius + 12, "12" );
		Text text2 = new Text( centerX - clockRadius + 3,  centerY +  5, "9" );
		Text text3 = new Text( centerX + clockRadius - 10, centerY + 3, "3" );
		Text text4 = new Text( centerX - 3, centerY + clockRadius - 3,   "6" );

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

			getChildren().clear();
			getChildren().addAll( circle, text1, text2, text3, text4, secondLine, minuteLine, hourLine );
		
	} // end of paintClock()

} // end of public class ClockPane
