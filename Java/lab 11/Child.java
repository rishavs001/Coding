public class Child extends Parent{
    public Child(int value) {
        super(value); // Call to parameterized constructor of Parent
    }

    public void proc1(){
        System.out.println("Child class");
    }

    static {
        System.out.println("Static block in Child");
    }

    {
        System.out.println("Non-static block in Child");
    }

}


