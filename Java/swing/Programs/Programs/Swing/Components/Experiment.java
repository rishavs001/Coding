import java.awt.Dimension;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.GridLayout;
import java.awt.Insets;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JRadioButton;
import javax.swing.SwingUtilities;

public class Experiment {
    Experiment() {
        JFrame frame = new JFrame("Experiment 2");
        frame.setLayout(new GridBagLayout());
        GridBagConstraints c = new GridBagConstraints();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel lbl1 = new JLabel("Your preferred language:");

        ButtonGroup bg = new ButtonGroup();
        JRadioButton btn1 = new JRadioButton("Java", true);
        JRadioButton btn2 = new JRadioButton("C");
        bg.add(btn1);
        bg.add(btn2);

        JLabel lbl2 = new JLabel("Your preferred OS:");
        JComboBox<String> jcb = new JComboBox<>(new String[] {"Linux", "Windows"});

        c.gridx = 0;
        c.gridy = 0;
        c.gridwidth = 1;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.insets = new Insets(0, 20, 0, 10);
        c.weightx = 0;
        c.weighty = 0.25;
        frame.add(lbl1, c);

        c.gridx = 1;
        c.gridy = 0;
        c.gridwidth = 1;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.insets = new Insets(0, 10, 0, 20);
        c.weightx = 0.5;
        c.weighty = 0.25;
        frame.add(btn1, c);

        c.gridx = 2;
        c.gridy = 0;
        c.gridwidth = 1;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.insets = new Insets(0, 20, 0, 10);
        c.weightx = 0.5;
        c.weighty = 0.25;
        frame.add(btn2, c);

        c.gridx = 0;
        c.gridy = 1;
        c.gridwidth = 1;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.insets = new Insets(0, 20, 0, 10);
        c.weightx = 0;
        c.weighty = 0.25;
        frame.add(lbl2, c);

        c.gridx = 1;
        c.gridy = 1;
        c.gridwidth = 2;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.insets = new Insets(0, 10, 0, 20);
        c.weightx = 1;
        c.weighty = 0.25;
        frame.add(jcb, c);

        JLabel out = new JLabel();
        JButton btn = new JButton("Submit");
        btn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                if(btn1.isSelected())
                    out.setText("Language: Java; OS: " + jcb.getSelectedItem());
                else if(btn2.isSelected())
                    out.setText("Language: C; OS: " + jcb.getSelectedItem());
            }
        });

        c.gridx = 0;
        c.gridy = 2;
        c.gridwidth = 3;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.insets = new Insets(0, 20, 0, 20);
        c.weightx = 1;
        c.weighty = 0.25;
        frame.add(out, c);

        c.gridx = 0;
        c.gridy = 3;
        c.gridwidth = 3;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.insets = new Insets(0, 20, 0, 20);
        c.weightx = 1;
        c.weighty = 0.25;
        frame.add(btn, c);

        frame.setSize(new Dimension(500, 300));
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Experiment();
            }            
        });
    }
}
