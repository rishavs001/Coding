//Creating objects of class

package lesson;

public class J014_OOPs {

    int x = 5;
    final int y = 12;   // Cannot be modified later
    String fname = "John";
    String lname = "Doe";

    public static void main(String[] args) {
      J014_OOPs myObj1 = new J014_OOPs();
      J014_OOPs myObj2 = new J014_OOPs();
      myObj2.x=10;
      //myObj2.y=188; //Throws Error
      System.out.println(myObj1.x);  //   5
      System.out.println(myObj2.x);  //   10
      System.out.println(myObj2.y);  //   12
      System.out.println("Name: " + myObj1.fname + " " + myObj1.lname);
    }
    
}
