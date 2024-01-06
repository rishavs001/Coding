package lesson;

public class J009_Loops {
    public static void main(String[] args) {

        //WHILE LOOP
        int i = 0;
        while (i < 5) {
        System.out.println(i);
        i++;
        }

        //DO WHILE
        i = 0;
        do {
        System.out.println(i);
        i++;
        }
        while (i < 5);


        //FOR LOOP
        for ( i = 0; i < 5; i++) {
            System.out.println(i);
          }

        //FOR EACH LOOP
        String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
        for (String K : cars) {
        System.out.println(K);
        }

    }
}
