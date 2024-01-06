package labwork.lab2;

import java.util.Arrays;

public class vector {
    private double[] elements;

    // Constructor taking an array as input
    public vector(double[] arr) {
        elements = Arrays.copyOf(arr, arr.length);
    }

    // Constructor taking another Vector as input
    public vector(vector v) {
        elements = Arrays.copyOf(v.elements, v.elements.length);
    }

    // Function to set the element at a specific index
    public void set(int index, double value) {
        if(index >= 0 && index < elements.length) {
            elements[index] = value;
        } else {
            System.out.println("Index out of range!");
        }
    }

    // Function to get the element at a specific index
    public double get(int index) {
        if(index >= 0 && index < elements.length) {
            return elements[index];
        } else {
            System.out.println("Index out of range!");
            return -1;
        }
    }

    public void multiply(double element){
        for(int i=0;i<elements.length;i++)
        {
                elements[i]=elements[i]*element;
        }
    }

    public void multiply(vector v) {
        for(int i=0;i<elements.length;i++)
             {
                elements[i]=elements[i]*v[i];
            }
        }      
}

