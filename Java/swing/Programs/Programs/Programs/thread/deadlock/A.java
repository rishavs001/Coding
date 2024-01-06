public class A {
   void m1(B b) {
        synchronized(b) {
        System.out.println(Thread.currentThread().getName() + 
                                "entered A.m1");
        try {
            Thread.sleep(1000);
        } catch(InterruptedException e) {

        }

        System.out.println("Trying to call b.last");
        b.last();
    }
   } 

   public void last() {
        System.out.println("Inside A.last");
    }
}
