// static method,  means that it can be accessed without creating an object of the class, 
// unlike public, which can only be accessed by objects:

package lesson;

public class J015_ClassMethod {
    static void myMethod() {
        System.out.println("Hello World!");
      }

      static void myStaticMethod() {
        System.out.println("Static methods can be called without creating objects");
      }
    
      // Public method
      public void myPublicMethod() {
        System.out.println("Public methods must be called by creating objects");
      }

      // Create a speed() method and add a parameter
      public void speed(int maxSpeed) {
        System.out.println("Max speed is: " + maxSpeed);
      }
    
    
      public static void main(String[] args) {
        myMethod();

        myStaticMethod(); // Call the static method
    // myPublicMethod(); This would compile an error

    J015_ClassMethod myObj = new J015_ClassMethod(); // Create an object of Main
    // myObj.myStaticMethod();
    myObj.myPublicMethod(); // Call the public method on the object
    myObj.speed(100);   
      }
}
