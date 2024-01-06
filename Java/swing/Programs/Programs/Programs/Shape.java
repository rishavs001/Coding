abstract public class Shape {
    abstract public double getArea();

    protected void m() {
        System.out.println("Public method in Shape");
    }

    /*public static Shape getShape(String type) {
        switch(type) {
            case "Circle": return new Circle();
            case "Rectangle": return new Rectangle1();
            default: return null;
        }
    } */
}

/* An abstract method can be defined only within an abstract class
 * We cannot create an object of an abstract class
 */
/* By design, Shape class should not be instantiable, rather the concrete geometric
 * shapes should be instantiable. So, Shape must be abstract, and the concrete geometric
 * shapes should extend Shape class. Shape cannot implement getArea in general,
 * so getArea should be abstract in Shape. in that way, the concrete subclasses
 * will be forced to implement it.
 */
