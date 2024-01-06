
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingUtilities;
import java.awt.FlowLayout;


public class firstGUI
{
  firstGUI(){
    JFrame frame= new JFrame("Swing Application");
    {
        frame.setSize(400,200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());
        frame.setVisible(true);
        JButton leftButton= new JButton("Left  Button");
        frame.add(leftButton);
        JLabel label=new JLabel("First Swing");
        frame.add(label);
    }
  }
    public static void main(String[] args) {
        {
            SwingUtilities.invokeLater(new Runnable(){
                public void run(){
                      new firstGUI();
                    //new Question1();
                }
            });
          

        }
    }
    
}
