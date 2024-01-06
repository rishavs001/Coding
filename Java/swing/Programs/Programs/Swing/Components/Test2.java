import javax.swing.ButtonGroup;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;
import javax.swing.JTabbedPane;
import javax.swing.SwingUtilities;
import java.awt.*;
import java.awt.event.*;

public class Test2 {

    private class LanguagePanel extends JPanel {
        JLabel lbl = new JLabel();

        private class RadioButtonItemListener implements ItemListener {
            public void itemStateChanged(ItemEvent e) {
                lbl.setText("Your preferred language: " + ((JRadioButton)e.getItem()).getText());
            }
        }

        LanguagePanel() {
            setLayout(new FlowLayout());
            ButtonGroup buttons = new ButtonGroup();
            JRadioButton jbtn = new JRadioButton("Java");
            JRadioButton cbtn = new JRadioButton("C");
            JRadioButton cppbtn = new JRadioButton("C++");

            buttons.add(jbtn);
            buttons.add(cbtn);
            buttons.add(cppbtn);

            ItemListener listener = new RadioButtonItemListener();
            jbtn.addItemListener(listener);
            cbtn.addItemListener(listener);
            cppbtn.addItemListener(listener);

            add(lbl);
            add(jbtn);
            add(cbtn);
            add(cppbtn);
        }
    }

    private class OSPanel extends JPanel {
        OSPanel() {
            JLabel lbl = new JLabel();
            String options[] = {"Linux", "Windows", "Mac"};
            JComboBox<String> jcBox = new JComboBox<>(options);
            add(lbl);
            add(jcBox);

            jcBox.addItemListener(new ItemListener() {
                public void itemStateChanged(ItemEvent e) {
                    lbl.setText("Your preferred OS: " + jcBox.getSelectedItem().toString());
                } 
            });
        }
    }

    Test2() {
        JFrame frame = new JFrame("Testing components");
        frame.setLayout(new FlowLayout());

        JTabbedPane tabPane = new JTabbedPane();
        tabPane.addTab("Languages", new LanguagePanel());
        tabPane.addTab("OS", new OSPanel());

        frame.add(tabPane);
        frame.setSize(500, 500);
    //    frame.pack();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
    
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Test2();
            }
        });
    }
}
