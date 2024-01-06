import java.awt.event.*;

public class Generic<T extends Number, U> {
   T[] arr;

   Generic(T[] arr) {
        this.arr = arr;
    }

   double avg() {
        double sum = 0.0;
        for(T v : arr)
            sum += v.doubleValue();

        return sum / arr.length;
   }

   boolean isEqual(Generic<? extends Number, ?> other) {
        if(this.avg() == other.avg())
            return true;
        return false;
   }

}
