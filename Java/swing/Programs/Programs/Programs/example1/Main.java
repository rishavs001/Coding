public class Main {
    public static void main(String[] args) throws ShapeException {
        Shape c = Shape.getShape("Circle");
        Shape p = Shape.getShape("Pyramid");

        System.out.println(c.getArea());
        try {
            System.out.println(c.getVolume());
        } catch(ShapeException e) {
            e.printStackTrace();
        }
        
        System.out.println(p.getArea());
        System.out.println(p.getVolume());
    }
}
