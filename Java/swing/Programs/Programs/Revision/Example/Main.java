public class Main {
    DBEntity entity = DBEntity.getEntity("reader");
    DBEntity[] retrieve = entity.query("where age > 25");
}
