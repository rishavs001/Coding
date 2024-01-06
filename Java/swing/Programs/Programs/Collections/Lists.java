import java.util.ArrayList;
import java.util.List;
import java.util.Stack;
import java.util.Iterator;

public class Lists {
    public static void main(String[] args) {
        List<Integer> iStack = new Stack<>();
        for(int i=10; i <= 15; i++)
            iStack.add(i);
        
        for(int i=0; i < iStack.size(); i++)
            System.out.println(iStack.get(i));
    }


}
