public class Circle extends ShapeTwoD {
    private double radius;
    private double lengths[];
    
    public Circle(double radius) {
        super(new double[] {radius});
        this.radius = radius;
    }

    public double getArea() {
        return Math.PI * radius * radius;
    }
}
