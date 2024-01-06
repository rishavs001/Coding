public class Main {
    public static void main(String[] args) {
        //Generic<Integer, String> iStack = new Generic<>(new Integer[] {12, 23, 445});
        //Generic<Double, String> iStack1 = new Generic<>(new Double[] {12.0, 23.0, 445.0});
        //System.out.println(iStack.isEqual(iStack1));
        Generic_2<Integer, String> obj1 = new Generic_2<Integer,String>(23, "Java");
        Generic_2<Double, String> obj2 = new Generic_2<Double,String>(14.9, "Python");

        obj1.showType();
        obj2.showType();
    }
}
