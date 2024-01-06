package classwork;
public class jconstructor {
    
        int modelYear;
        String modelName;
      
        public jconstructor(int year, String name) {
          modelYear = year;
          modelName = name;
        }
      
        public static void main(String[] args) {
          jconstructor myCar = new jconstructor(1969, "Mustang");
          System.out.println(myCar.modelYear + " " + myCar.modelName);
        }
      
}
