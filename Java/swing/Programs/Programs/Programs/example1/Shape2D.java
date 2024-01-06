public interface Shape2D extends Shape {
    default double getVolume() throws ShapeException {
        throw new ShapeException("Cannot obtain volume of 2D shape");
    }
}
