/*
For classes, you can use either public or default:

Modifier	Description	Try it
public	    The class is accessible by any other class	
default	    The class is only accessible by classes in the same package. This is used when you don't specify a modifier. You will learn more about packages in the Packages chapter	


For attributes, methods and constructors, you can use the one of the following:

Modifier	Description	Try it
public	    The code is accessible for all classes	
private	    The code is only accessible within the declared class	
default	    The code is only accessible in the same package. This is used when you don't specify a modifier. You will learn more about packages in the Packages chapter	
protected	The code is accessible in the same package and subclasses. You will learn more about subclasses and superclasses in the Inheritance chapter


For attributes and methods, you can use the one of the following:

Modifier	    Description
final	        Attributes and methods cannot be overridden/modified
static	        Attributes and methods belongs to the class, rather than an object
abstract	    Can only be used in an abstract class, and can only be used on methods. The method does not have a body, for example abstract void run();. The body is provided by the subclass (inherited from). You will learn more about inheritance and abstraction in the Inheritance and Abstraction chapters
transient	    Attributes and methods are skipped when serializing the object containing them
synchronized	Methods can only be accessed by one thread at a time
volatile	    The value of an attribute is not cached thread-locally, and is always read from the "main memory"
 */

package lesson;

public class J018_Modifier 
{
    final int x = 10;
  final double PI = 3.14;

  public static void main(String[] args) {
    J018_Modifier myObj = new J018_Modifier();
   // myObj.x = 50; // will generate an error: cannot assign a value to a final variable
   // myObj.PI = 25; // will generate an error: cannot assign a value to a final variable
    System.out.println(myObj.x);
  }
    
}
