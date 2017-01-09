

/**
 * Class Employee
 */
public class Employee extends Person {

  //
  // Fields
  //

  private String office;
  private double salary;
  private void dateHired;
  
  //
  // Constructors
  //
  public Employee () { };
  
  //
  // Methods
  //


  //
  // Accessor methods
  //

  /**
   * Set the value of office
   * @param newVar the new value of office
   */
  private void setOffice ( String newVar ) {
    office = newVar;
  }

  /**
   * Get the value of office
   * @return the value of office
   */
  private String getOffice ( ) {
    return office;
  }

  /**
   * Set the value of salary
   * @param newVar the new value of salary
   */
  private void setSalary ( double newVar ) {
    salary = newVar;
  }

  /**
   * Get the value of salary
   * @return the value of salary
   */
  private double getSalary ( ) {
    return salary;
  }

  /**
   * Set the value of dateHired
   * @param newVar the new value of dateHired
   */
  private void setDateHired ( void newVar ) {
    dateHired = newVar;
  }

  /**
   * Get the value of dateHired
   * @return the value of dateHired
   */
  private void getDateHired ( ) {
    return dateHired;
  }

  //
  // Other methods
  //

  /**
   */
  public void Employee(  )
  {
  }


  /**
   * @param        name
   * @param        address
   * @param        phoneNumber
   * @param        emailAddress
   */
  public void Employee( String name, String address, String phoneNumber, String emailAddress )
  {
  }


  /**
   * @return       String
   */
  public String getOffice(  )
  {
  }


  /**
   * @return       double
   */
  public double getSalary(  )
  {
  }


  /**
   * @return       Date
   */
  public Date getDateHired(  )
  {
  }


  /**
   * @param        office
   */
  public void setOffice( String office )
  {
  }


  /**
   * @param        salary
   */
  public void setSalary( double salary )
  {
  }


  /**
   * @param        dateHired
   */
  public void setDateHired( void dateHired )
  {
  }


  /**
   * @return       String
   */
  public String toString(  )
  {
  }


}



/**
 * Class Staff
 */
public class Staff extends Employee {

  //
  // Fields
  //

  private String title;
  
  //
  // Constructors
  //
  public Staff () { };
  
  //
  // Methods
  //


  //
  // Accessor methods
  //

  /**
   * Set the value of title
   * @param newVar the new value of title
   */
  private void setTitle ( String newVar ) {
    title = newVar;
  }

  /**
   * Get the value of title
   * @return the value of title
   */
  private String getTitle ( ) {
    return title;
  }

  //
  // Other methods
  //

  /**
   */
  public void Staff(  )
  {
  }


  /**
   * @param        name
   * @param        address
   * @param        phoneNumber
   * @param        emailAddress
   */
  public void Staff( String name, String address, String phoneNumber, String emailAddress )
  {
  }


  /**
   * @return       String
   */
  public String getTitle(  )
  {
  }


  /**
   * @return       String
   */
  public String setTitle(  )
  {
  }


  /**
   * @return       String
   */
  public String toString(  )
  {
  }


}
