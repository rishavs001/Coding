public final class ShapeTwoD extends Shape {
    private double[] lengths;

    ShapeTwoD(double[] lengths) {
    //    this.lengths = new double[lengths.length];
        this.lengths = lengths;
    }

    public double getArea() {
        return 5.0;
    }
}
