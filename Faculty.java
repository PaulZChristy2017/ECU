

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
 * Class Faculty
 */
public class Faculty extends Employee {

  //
  // Fields
  //

  private String officeHour;
  private String rank;
  
  //
  // Constructors
  //
  public Faculty () { };
  
  //
  // Methods
  //


  //
  // Accessor methods
  //

  /**
   * Set the value of officeHour
   * @param newVar the new value of officeHour
   */
  private void setOfficeHour ( String newVar ) {
    officeHour = newVar;
  }

  /**
   * Get the value of officeHour
   * @return the value of officeHour
   */
  private String getOfficeHour ( ) {
    return officeHour;
  }

  /**
   * Set the value of rank
   * @param newVar the new value of rank
   */
  private void setRank ( String newVar ) {
    rank = newVar;
  }

  /**
   * Get the value of rank
   * @return the value of rank
   */
  private String getRank ( ) {
    return rank;
  }

  //
  // Other methods
  //

  /**
   */
  public void Faculty(  )
  {
  }


  /**
   * @param        name
   * @param        address
   * @param        phoneNumber
   * @param        emailAddress
   */
  public void Faculty( String name, String address, String phoneNumber, String emailAddress )
  {
  }


  /**
   * @return       String
   */
  public String getOfficeHour(  )
  {
  }


  /**
   * @return       String
   */
  public String getRank(  )
  {
  }


  /**
   * @param        officeHour
   */
  public void setOfficeHour( String officeHour )
  {
  }


  /**
   * @param        rank
   */
  public void setRank( String rank )
  {
  }


  /**
   * @return       String
   */
  public String toString(  )
  {
  }


}
