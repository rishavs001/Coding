import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JRadioButton;

public class secondSwing {
    public secondSwing()
    {
        JFrame frame = new  JFrame("Swing Application");
        frame.setSize(500,600);
        frame.setVisible(true);
        frame.setLayout(new FlowLayout());
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JButton button = new JButton("Click Me!");

        JRadioButton radioA= new JRadioButton("True");
        JRadioButton radioB= new JRadioButton("False");
        frame.add(radioA);
        frame.add(radioB);
        frame.add(button);

    }

    public static void main(String[] args) {
        new secondSwing();
    }
    
}
