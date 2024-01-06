package lesson;

public class J026_Enums {
    enum Level {
        LOW,
        MEDIUM,
        HIGH
      }
    
      public static void main(String[] args) {
        Level myVar = Level.MEDIUM; 
        System.out.println(myVar);
      }
}
