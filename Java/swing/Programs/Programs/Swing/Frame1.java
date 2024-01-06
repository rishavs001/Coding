import javax.swing.Action;
import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;

import java.awt.FlowLayout;
import java.awt.GridBagLayout;
import java.awt.GridLayout;
import java.awt.event.*;

public class Frame1 implements ItemListener {

    JLabel lblLang;

    public void itemStateChanged(ItemEvent e) {
        lblLang.setText("Your favorite language is " + ((JRadioButton)e.getItem()).getText());
    }

    Frame1() {
        JFrame frame = new JFrame("Simple Swing Application");
        frame.setSize(500, 200);
       // frame.setLayout(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JPanel panel = new JPanel(new GridLayout(5, 3, 10, 10));

        JLabel lbl = new JLabel("Username");
        JTextField name = new JTextField(100);
        JLabel lbl1 = new JLabel("Password");
        JTextField passwd = new JTextField(100);

        lblLang = new JLabel("Your favorite language is Java");
        ButtonGroup bg = new ButtonGroup();
        //JRadioButton rad1 = new JRadioButton("C", false);
        JRadioButton rad2 = new JRadioButton("C++", false);
        JRadioButton rad3 = new JRadioButton("Java", true);
        
        bg.add(rad2);
        bg.add(rad3);
       // JRadioButton rad4 = new JRadioButton("Python", false);
        //rad1.addItemListener(this);
        rad2.addItemListener(this);
        rad3.addItemListener(this);
        //rad4.addItemListener(this);

        JButton btn1 = new JButton("Reset");
        JButton btn2 = new JButton("Login");

        btn1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                name.setText("");
                passwd.setText("");
            }
        });

        btn2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                System.out.println("Name: " + name.getText());
                System.out.println("Password: " + passwd.getText());
            }
        });

        panel.add(lbl);
        panel.add(name);
        panel.add(lbl1);
        panel.add(passwd);
        //panel.add(rad1);
        panel.add(rad2);
        panel.add(rad3);
        //panel.add(rad4);
        panel.add(btn1);
        panel.add(btn2);
        panel.add(lblLang);


        frame.add(panel);
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Frame1();
            }
        });
    }
}
