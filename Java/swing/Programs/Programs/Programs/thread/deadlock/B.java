public class B {
    void m2(A a) {
        synchronized(a) {
        System.out.println(Thread.currentThread().getName() + 
                                "entered B.m2");
        try {
            Thread.sleep(1000);
        } catch(InterruptedException e) {

        }


        System.out.println("Trying to call A.last");
        a.last();
    }
   }

   public void last() {
        System.out.println("Inside B.last");
   }
}
