package classwork.lab7;

public class accessA {
    public int a=2;
    private int b=3;
    protected int c=4;

    public void accessB(){
        B n=new B();
        n.printB();
    }

    private class B{
        public int x=2;
        private int y=3;
        protected int z=4;

        void printA(){
            System.out.println(a);
            System.out.println(b);
            System.out.println(c);
        }
        void printB(){
            System.out.println(x);
            System.out.println(y);
            System.out.println(z);
        }
    }

    public static void main(String[] args){
        accessA n=new accessA();
        n.accessB();
    }
}