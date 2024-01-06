import java.lang.reflect.InvocationTargetException;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingUtilities;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Test1 {
    Test1() {
        JFrame frame = new JFrame("Simple Application");
        frame.setSize(600,200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new BorderLayout());
        // Discuss align

        JButton btn1 = new JButton("Long Button 1");
        JButton btn2 = new JButton("Long Button 2");
        JButton btn3 = new JButton("On first column");
        JButton btn4 = new JButton("On first row");
        JLabel lbl = new JLabel("Simple label long enough");

        btn4.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                lbl.setText("Button 4 clicked");
            }
        });
        

        frame.add(btn1, BorderLayout.PAGE_START);
        frame.add(btn4, BorderLayout.LINE_START);
        frame.add(btn2, BorderLayout.PAGE_END);
        frame.add(btn3, BorderLayout.CENTER);
        frame.add(lbl, BorderLayout.AFTER_LAST_LINE);
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Test1();
            }
        });
    }
}
