public interface StackInterface1 {
    void push(int x);
    int pop();

    default void clear() {
        System.out.println("Clear is not implemented");
    }
}
