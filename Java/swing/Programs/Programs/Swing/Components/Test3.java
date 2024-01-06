import java.awt.BorderLayout;
import java.awt.Dimension;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JList;
import javax.swing.JScrollPane;
import javax.swing.ListSelectionModel;
import javax.swing.SwingUtilities;
import javax.swing.border.Border;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;

public class Test3 {
    Test3() {
        JFrame frame = new JFrame("testing list");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        
        JList<String> list = new JList<>(new String[] {"New Delhi", "Kolkata", "Mumbai",
                                        "Jamshedpur", "Bangalore", "Chennai", "New Delhi", "Kolkata", "Mumbai",
                                        "Jamshedpur", "Bangalore", "Chennai", "New Delhi", "Kolkata", "Mumbai",
                                        "Jamshedpur", "Bangalore", "Chennai"});

        list.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        
        JScrollPane scrlPane = new JScrollPane(list);
        scrlPane.setPreferredSize(new Dimension(300, 80));

        //frame.setPreferredSize(new Dimension(300, 80));
        JLabel lbl = new JLabel("Select a city");
        frame.setLayout(new BorderLayout());
        frame.add(lbl, BorderLayout.PAGE_START);
        frame.add(scrlPane, BorderLayout.CENTER);

        list.addListSelectionListener(new ListSelectionListener() {
            public void valueChanged(ListSelectionEvent e) {
                if(list.getSelectedIndex() != -1)
                    lbl.setText("You selected " + list.getSelectedValue());
                else
                    lbl.setText("Select a city");
            }
        });

        //frame.pack();
        frame.setSize(300, 200);
        //frame.pack();
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Test3();
            }
        });
    }
}
