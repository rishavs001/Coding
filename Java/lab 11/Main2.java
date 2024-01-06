
// public class Vector{
//     private double array[] ;
//     Vector(int arr[], int n){
//         array = new double[arr.length];
//         for(int i=0;i<10; i++)
//         {
//             array[i]=arr[i];
//         }
//     }
//     Vector(Vector arr[]){
//         array = new double[arr.length];
//         for(int i=0;i<10; i++)
//         {
//             array[i]=arr[i];
//         }
//     }

//     void set(int i, double val)
//     {
//         array[i]=val;
//     }
//     int get()
//     {
//         return array[i];
//     }

//     double multiply(int a ){
//         for(int i=0;i<array.length;i++){
//             array[i]*=a;
//         }
//     }

//     double multiply(Vector a ){
//         for(int i=0;i<a.length;i++){
//             array[i]*=a.array[i];
//         }
//     }

// }

// public class Main2 {
    
//     public static void main(String[] args) {
        
//     }
// }
import java.util.*;

public class Main2{
    public static void main(String[] args){
        Employee emp = Employee.getEmployee( "John Doe", 123, "NYC", "developer");
        emp.insert();
        emp.delete();

        emp = Employee.getEmployee( "Jane Doe", 456, "LA", "manager");
        emp.insert();
        emp.delete();
    }
}