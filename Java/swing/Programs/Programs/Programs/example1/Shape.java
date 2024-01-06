public interface Shape {
    double getArea();
    double getVolume() throws ShapeException;

    static Shape getShape(String type) {
        switch(type) {
            case "Circle": return new Circle();
            case "Pyramid": return new Pyramid();
            default: return null;
        }
    }
}
