//Using Multiple Classes

// it is a good practice to create an object of a class and access it in another class.

// Remember that the name of the java file should match the class name. In this example, we have created two files in the same directory:
package lesson;

public class J016_1_class1 {
    public void fullThrottle() {
        System.out.println("The car is going as fast as it can!");
      }
    
      public void speed(int maxSpeed) {
        System.out.println("Max speed is: " + maxSpeed);
      }
}
