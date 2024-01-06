package lesson;

public class J005_Strings {
    public static void main(String args[]){

        //STRING LENGTH
        String txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        System.out.println("The length of the txt string is: " + txt.length());

        //toUpperCase,toLowerCase
        String txt1 = "Hello World";
        System.out.println(txt1.toUpperCase());   // Outputs "HELLO WORLD"
        System.out.println(txt1.toLowerCase());   // Outputs "hello world"

       //Finding a Character in a String
        String txt2 = "Please locate where 'locate' occurs!";
        System.out.println(txt2.indexOf("locate")); // Outputs 7

        //String Concatenation
        String firstName = "John";
        String lastName = "Doe";
        System.out.println(firstName + " " + lastName);

        //STRING + INTEGER
        String x = "10";
        int y = 20;
        String z = x + y;  // z will be 1020 (a String)
        System.out.println(z);

        //The backslash (\) escape character turns special characters into string characters
        String txt3 = "We are the so-called \"Vikings\" from the north.";
        System.out.println(txt3);  //   We are the so-called "Vikings" from the north.

        /*
        \n	New Line	
        \r	Carriage Return	
        \t	Tab	
        \b	Backspace	
        \f	Form Feed 
        */

    }
    
}
