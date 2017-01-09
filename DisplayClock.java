import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.layout.BorderPane;

// public class DisplayClock
public class DisplayClock extends Application {

	@Override	// Override the start method in the Application class
	public void start( Stage primaryStage ) {

		// Create a clock
		ClockPane clock = new ClockPane();

		// Get time for clock
		String timeString = clock.getHour() + ":" + clock.getMinute()
			+ ":" + clock.getSecond();

		// Create a label for the clock
		Label labelCurrentTime = new Label( timeString );

		// Place a clock and label in border pane
		BorderPane pane = new BorderPane();
		pane.setCenter( clock );
		pane.setBottom( labelCurrentTime );
		BorderPane.setAlignment( labelCurrentTime, Pos.TOP_CENTER );

		// Create a scene and place it in the stage
		Scene scene = new Scene( pane, 250, 250 );

		// Set the stage title
		primaryStage.setTitle("DisplayClock");

		// Place the scene in the stage
		primaryStage.setScene( scene );

		// Display the stage
		primaryStage.show();

	} // end of start
	
} // end of DisplayClock
