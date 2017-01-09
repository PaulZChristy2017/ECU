package lab4;

/**
 * Class Student
 */
public class Student extends Person {

  //
  // Fields
  //

  private final String classStatus;
  
  ArrayList< String > studentList = new ArrayList< String >();
  
  //
  // Constructors
  //
  public Student () { };
  
  //
  // Methods
  //


  //
  // Accessor methods
  //

  /**
   * Set the value of classStatus
   * @param newVar the new value of classStatus
   */
  private void setClassStatus ( String classStatus ) {
    this.classStatus = classStatus;
  }

  /**
   * Get the value of classStatus
   * @return the value of classStatus
   */
  public String getClassStatus ( ) {
    return classStatus;
  }

  //
  // Other methods
  //

  /**
   */
  public void Student(  ) { }


  /**
   * @param        name
   * @param        address
   * @param        phoneNumber
   * @param        emailAddress
   */
  public void Student( String name, String address, String phoneNumber, String emailAddress, String classStatus ) { 
	  
	  //
		staffList.add(name);
		staffList.add(address);
		staffList.add(phoneNumber);
		staffList.add(emailAddress);
		staffList.add(student);
		
		for ( int counter = 0; counter < studentList.size()+1; counter++ ) {
			
			if ( counter == 1 ) 
				System.out.println("Person: \t" + studentList.get(0));
			
			else if ( counter == 2 )
				System.out.println("Address: \t" + studentList.get(1));
			
			else if ( counter == 3 )
				System.out.println("Phone: \t\t" + studentList.get(2));
			
			else if ( counter == 4 )
				System.out.println("Email: \t\t" + studentList.get(3));
			
			else if ( counter == 5 )
				System.out.println("Status: \t" + studentList.get(4));
				
		}
			
		System.out.println();
	}
  }


  /**
   * @return       String
   */
  public String toString(  ) {
	  
	  return "Student";
  }

}
