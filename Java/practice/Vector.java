import java.util.*;

public class Vector {
    private double[] elements;

    // Constructor that takes an array as input
    public Vector(double[] arr) {
        this.elements = Arrays.copyOf(arr, arr.length);
    }

    // Constructor that takes another Vector as input for copy
    public Vector(Vector other) {
        this.elements = Arrays.copyOf(other.elements, other.elements.length);
    }

    // Set function to modify elements at a specific index
    public void set(int index, double value) {
        if (index >= 0 && index < elements.length) {
            elements[index] = value;
        } else {
            System.out.println("Index out of range.");
        }
    }

    // Get function to retrieve elements at a specific index
    public double get(int index) {
        if (index >= 0 && index < elements.length) {
            return elements[index];
        } else {
            System.out.println("Index out of range.");
            return 0.0; // Return a default value
        }
    }

    public static void main(String[] args) {
        // Example usage
        double[] arr = {1.0, 2.0, 3.0, 4.0, 5.0};
        Vector vec1 = new Vector(arr);

        Vector vec2 = new Vector(vec1); // Creating a copy using the second constructor

        vec1.set(2, 10.0); // Set value at index 2 in vec1 to 10.0

        System.out.println("vec1[2]: " + vec1.get(2)); // Output: vec1[2]: 10.0
        System.out.println("vec2[2]: " + vec2.get(2)); // Output: vec2[2]: 3.0
    }
}


// public class Vector {

//      double arrayy[];
//     public Vector(double arr[]){
//         arrayy= new double[arr.length];
//         for(int i=0;i<arr.length;i++){
//             arrayy[i]=arr[i];
//         }
//     }
//     public vector(Vector v){
//         arrayy=new double[v.Vector.length];
//         //System.arraycopy(v.elements, 0, elements, 0, v.elements.length);
//         // for(int i=0;i<v..vector.length;i++){
//         //     arrayy[i]=v.arr[i];
//         // }
//     }
//     public static void main(String[] args) {
//             double[] array1 = { 1.0, 2.0, 3.0 };
//             double[] array2 = { 2.0, 3.0, 4.0 };
//             Vector vec3 = new Vector(array1);
//             Vector vec4 = new Vector(array2);
//     }
// }