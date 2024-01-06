abstract class Prog1 {
    Prog1() {
        System.out.println("Within abstract class Prog1 constructor");
    }

    abstract void m();

    static Prog1 getConcrete(String type) {
        switch (type) {
            case "concrete":
                return new Concrete();
            case "concrete1":
                return new Concrete2();
            default:
                return null;
        }
    }
}