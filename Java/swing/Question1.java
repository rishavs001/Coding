import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingUtilities;
import java.awt.FlowLayout;

public class Question1{
    Question1(){
        JFrame frame=new JFrame("Simple swing application");
        frame.setSize(220, 100);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        frame.setLayout(new FlowLayout());
        JButton leftButton=new JButton("Left");
        JButton rightButton=new JButton("Right");
        frame.add(leftButton);
        frame.add(rightButton);
        JLabel label=new JLabel("Click a button");
        frame.add(label); 
    }

    
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable(){
            public void run(){
                new Question1();
                //new Question1();
            }
        });
    }
}