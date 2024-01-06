public class A {
    public static int a;

    public static class B {
        private void m() {
            a = 10;
        }
    }    
}

// Outer class variables are accessible to inner class
// Inner class variables are not directly accessible to outer class, but all of them
// are acessible via object of the inner class.
// Static Inner class can access only static outer variables.
// Local class cannot use any access specifier, and will be visible only within its scope.

