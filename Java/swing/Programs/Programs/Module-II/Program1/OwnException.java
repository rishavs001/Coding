public class OwnException extends Exception {
    private String msg;
    private Throwable cause;
    
    public OwnException(String msg) {
        super(msg);
        this.msg = msg;
        this.cause = null;
    }

    public OwnException(String msg, Throwable cause) {
        super(msg);
        this.msg = msg;
        this.cause = cause;
        this.initCause(cause);
    }

    public String getMessage() {
        String msg = this.msg;
        return msg;
    }

    public String toString() {
        String msg = "OwnException: " + this.msg;
        return msg;
    } 
}
