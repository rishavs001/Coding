import java.awt.BorderLayout;
import java.awt.CardLayout;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.SwingUtilities;

public class CardLayoutCode {
    CardLayoutCode() {
        JFrame frame = new JFrame("CardLayout Example");
        frame.setLayout(new BorderLayout());

        JPanel comboBoxPane = new JPanel();
        final String BUTTONPANEL = "Click to see Buttons";
        final String TEXTPANEL = "Click to see Text";
        String items[] = {BUTTONPANEL, TEXTPANEL};
        JComboBox<String> cb = new JComboBox<>(items);
        comboBoxPane.add(cb);

        JPanel card1 = new JPanel();
        card1.add(new JButton("Button 1"));
        card1.add(new JButton("Button 2"));

        JPanel card2 = new JPanel();
        card2.add(new JLabel("We are using Card Layout"));

        JPanel card = new JPanel(new CardLayout());
        card.add(card1, BUTTONPANEL);
        card.add(card2, TEXTPANEL);

        cb.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent e) {
                CardLayout layout = (CardLayout)card.getLayout();
                layout.show(card, (String)e.getItem());
            }
        });

        frame.setSize(300, 150);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(comboBoxPane, BorderLayout.PAGE_START);
        frame.add(card, BorderLayout.CENTER);
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new CardLayoutCode();
            }
        });
    }
}

