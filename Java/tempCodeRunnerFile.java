import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;

import java.awt.*;

public class GridLayoutCode {
    GridLayoutCode() {
        JFrame frame = new JFrame("Testing GridLayout");
        frame.setSize(500, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        frame.setLayout(new GridLayout(3, 2, 0, 50));

        JLabel lbl = new JLabel("Name");
        frame.add(lbl, 0);

        JTextField txtName = new JTextField();
        frame.add(txtName, 1);

        lbl = new JLabel("Password");
        frame.add(lbl, 2);

        txtName = new JTextField(null);
        frame.add(txtName, 3);

        JButton btn1 = new JButton("Reset");
        frame.add(btn1, 4);

        JButton btn2 = new JButton("Reset");
        frame.add(btn2, 5);
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new GridLayoutCode();
            }
        });
    }
}
