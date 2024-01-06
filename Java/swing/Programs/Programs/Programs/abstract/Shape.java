abstract public class Shape {
    public static Shape getShape(String type) {
        switch(type) {
            case "Circle": return new Circle(3.0);
            case "Pyramid": return new Pyramid();
            default: return null;
        }
    }
}
