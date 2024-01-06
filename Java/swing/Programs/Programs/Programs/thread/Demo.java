public class Demo {
    private String msg;

    public void print(String msg) {
        System.out.print("[" + msg);
        try {
            Thread.sleep(1000);
        } catch(InterruptedException e) {

        }
        System.out.println("]");
    }
}
