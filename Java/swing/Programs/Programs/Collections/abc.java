// Create a checked exception named InvalidEntryException, that will take a String as a parameter
// in its constructor. When caught and printed as object, i.e., upon invocation of
// System.out.println(e) it must print “InvalidEntryException: “ followed by the String. But when
// e.getMessage() will be invoked, it must omit the “InvalidEntryException: “ part and return only
// the String. From main method, throw and catch the exception. Within catch clause, write the two
// lines System.out.println(e.getMessage()); followed by System.out.println(e) and test your
// exception
public class Main {
    public static void main(String[] args) {
        try {
            throw new InvalidEntryException("This is an invalid entry");
            } catch (InvalidEntryException e) {
                System.out.println(e);
                System.out.println(e.getMessage());
                }
                }
                }
                class InvalidEntryException extends Exception{
                    private String message;
                    public InvalidEntryException(String s){
                        super();
                        this.message = "InvalidEntryException: "+s;
                        }
                        @Override
                        public String getMessage(){
                            return this.message;
                            }
                            }
                        
