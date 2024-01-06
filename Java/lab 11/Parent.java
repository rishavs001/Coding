public class Parent{
    //Parent(){}
    Parent(int a){}
    public void proc1(){
        System.out.println("Parent class");
    }
    static {
        System.out.println("Static block in Parent");
    }

    {
        System.out.println("Non-static block in Parent");
    }

    static Parent setChild(String s){
        if (s=="Child")
            return new Child();
        else if (s=="Child1")
            return new Child1();

            return null;
    }
    
}