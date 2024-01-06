/*
  The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must:
        declare class variables/attributes as private
        provide public get and set methods to access and update the value of a private variable
 */

package lesson;

public class J019_1_Encapsulation {
    
        private String name;

        // Setter
        public void setName(String newName) {
          this.name = newName;
        }

     
        // Getter
        public String getName() {
          return name;
        }
     
        
    
    
}
