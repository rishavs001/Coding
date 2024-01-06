package labwork02;

public class Vector {
    
        private double[] elements;
    
        public Vector(double[] array) {
            elements = new double[array.length];
            System.arraycopy(array, 0, elements, 0, array.length);
        }
    
        public Vector(Vector otherVector) {
            elements = new double[otherVector.elements.length];
            System.arraycopy(otherVector.elements, 0, elements, 0, otherVector.elements.length);
        }

        public Vector multiply(double scalar) {
            double[] result = new double[elements.length];
            for (int i = 0; i < elements.length; i++) {
                result[i] = elements[i] * scalar;
            }
            return new Vector(result);
        }
    
        public double multiply(Vector otherVector) {
            if (elements.length != otherVector.elements.length) {
                throw new IllegalArgumentException("Vectors must have the same length for dot product");
            }
            double dotProduct = 0;
            for (int i = 0; i < elements.length; i++) {
                dotProduct += elements[i] * otherVector.elements[i];
            }
            return dotProduct;
        }
    
        public void set(int index, double value) {
            if (index >= 0 && index < elements.length) {
                elements[index] = value;
            } else {
                throw new IndexOutOfBoundsException("Index out of bounds");
            }
        }
    
        public double get(int index) {
            if (index >= 0 && index < elements.length) {
                return elements[index];
            } else {
                throw new IndexOutOfBoundsException("Index out of bounds");
            }
        }
    
        public static void main(String[] args) {
            double[] array = { 1.0, 2.0, 3.0, 4.0 };
            Vector vec1 = new Vector(array);
            Vector vec2 = new Vector(vec1);
            vec2.set(1, 5.0);
            System.out.println(vec1);  // Output: [1.0, 2.0, 3.0, 4.0]
            System.out.println(vec2);  // Output: [1.0, 5.0, 3.0, 4.0]
            System.out.println(vec2.get(2));  // Output: 3.0



            double[] array1 = { 1.0, 2.0, 3.0 };
            double[] array2 = { 2.0, 3.0, 4.0 };
            Vector vec3 = new Vector(array1);
            Vector vec4 = new Vector(array2);
    
            // Multiply by scalar
            Vector result1 = vec3.multiply(2.0);
            System.out.println("Scalar multiplication: " + result1);  // Output: [2.0, 4.0, 6.0]
    
            // Dot product
            double dotProduct = vec3.multiply(vec4);
            System.out.println("Dot product: " + dotProduct);  // Output: 20.0
        }
    
       
        public String toString() {
            StringBuilder sb = new StringBuilder("[");
            for (int i = 0; i < elements.length; i++) {
                sb.append(elements[i]);
                if (i < elements.length - 1) {
                    sb.append(", ");
                }
            }
            sb.append("]");
            return sb.toString();
        }
    
    
}
