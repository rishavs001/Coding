// Write a Java program to read an entire integer array from argument, implement Insertion sort to sort the array, and output the sorted array,
// i.e. if user provides output as “java Main 23 12 56 79 30” and you will have to output “12 23 30 56 79”.

package labwork01;
// public class InsertionSort{

// }

public class lab01_4 {
    public static void main(String args[])
    {
        int arr[] = { 23, 12, 56, 79, 30 };
        for(int i=1;i<arr.length;i++)
        {   int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
         for(int i=0;i<arr.length;i++)
         {
            System.out.println(arr[i]);
         }
        
 
        // InsertionSort ob = new InsertionSort();
        // ob.sort(arr);
 
        // printArray(arr);
    }
    
}
