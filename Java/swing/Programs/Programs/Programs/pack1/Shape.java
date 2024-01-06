package pack1;

public class Shape {
    private double area;
    
    public Shape(int area) {
        this.area = area;
        System.out.println("Within shape constructor");
    }

    public double getArea() {
        return area;
    }


}
