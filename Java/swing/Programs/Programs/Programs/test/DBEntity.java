public interface DBEntity {
    public void insert(DBEntity entity);

    static DBEntity getEntity(String type) {
        switch(type) {
            case "doctor": return new Doctor();
            default: return null;
        }
    }
}
