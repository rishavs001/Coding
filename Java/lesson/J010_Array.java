package lesson;

public class J010_Array {
    public static void main(String args[]) {
        String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
        System.out.println(cars[0]);
        cars[0] = "Opel";
        System.out.println(cars[0]);
        // Now outputs Opel instead of Volvo


        //Loop Through an Array
        String[] car = {"Volvo", "BMW", "Ford", "Mazda"};
        for (int i = 0; i < car.length; i++) {
        System.out.println(car[i]);
        }

        //MultiDimensional Array
        int[][] myNumbers = { {1, 2, 3, 4}, {5, 6, 7} };
        for (int i = 0; i < myNumbers.length; ++i) {
        for(int j = 0; j < myNumbers[i].length; ++j) {
        System.out.println(myNumbers[i][j]);
      }
    }
  }
    
}
