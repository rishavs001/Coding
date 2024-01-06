package lesson;

public class J017_Constructor {

    int x;

  public J017_Constructor(int y) {
    x = y;
  }

  public static void main(String[] args) {
    J017_Constructor myObj = new J017_Constructor(5);
    System.out.println(myObj.x);
  }
    
}

//  Outpur is 5
