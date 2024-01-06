public class Generic_2<T, U> {
    T obj1;
    U obj2;

    Generic_2(T obj1, U obj2) {
        this.obj1 = obj1;
        this.obj2 = obj2;
    }

    public void showType() {
        System.out.println("Type of T is: " + obj1.getClass().getName());
        System.out.println("Type of U is " + obj2.getClass().getName());
    }
}