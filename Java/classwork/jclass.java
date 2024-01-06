package classwork;
// we created a static method, which means that it can be accessed without creating an object of the class, 
//unlike public, 
// which can only be accessed by objects:

public class jclass {
    // Static method
    static void myStaticMethod() {
      System.out.println("Static methods can be called without creating objects");
    }
  
    // Public method
    public void myPublicMethod() {
      System.out.println("Public methods must be called by creating objects");
    }
  
    // Main method
    public static void main(String[] args) {
      myStaticMethod(); // Call the static method
      // myPublicMethod(); This would compile an error
  
      jclass myObj = new  jclass(); // Create an object of Main
      myObj.myPublicMethod(); // Call the public method on the object
    }
  }


// public class jclass {

//     int x=5;        //class variable

//     static void print(int y)        //class method
//     {
//          System.out.println(y);
//     }

//     public static void main (String [] args){
//         jclass a= new jclass();
//         print(a.x);
//     }
    
// }
