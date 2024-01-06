import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingUtilities;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


public class Question2 {
    Question2(){
        JFrame frame=new JFrame("Simple swing application");
        frame.setSize(200, 120);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        frame.setLayout(new FlowLayout());
        JButton leftButton=new JButton("Left");
        JButton rightButton=new JButton("Right");
        JLabel lbl=new JLabel();
        leftButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                lbl.setText("Left Button pressed");
            }
        });
        rightButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                lbl.setText("Right Button pressed");
            }
        });
        frame.add(leftButton);
        frame.add(rightButton);
        JLabel label=new JLabel("Click a button");
        frame.add(label);
        frame.add(lbl);
    }
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable(){
            public void run(){
                new Question2();
            }
        });
    }
}