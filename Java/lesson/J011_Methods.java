package lesson;

public class J011_Methods {

    //Non Parameteried Method
    static void myMethod1() {
        System.out.println("I just got executed!");
      }

      //Parameterized Method
      static void myMethod2(String fname, int age) {
        System.out.println(fname + " is " + age);
      }

      static int myMethod3(int x) {
        return 5 + x;
      }
    //Parameterized Method with return
      public static void main(String[] args) {
        myMethod1();
        myMethod2("Liam", 5);
        System.out.println(myMethod3(3));

      }
    
}
