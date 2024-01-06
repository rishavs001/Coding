public interface DBEntity {
    boolean insert(String query);
    boolean update(String query);
    boolean delete(String query);
    DBEntity[] query(String condition);

    static DBEntity getEntity(String type) {
        switch(type) {
            case "reader": return new Reader();
            default: return null;
        }
    }

    void m();
}
