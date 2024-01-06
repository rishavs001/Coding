import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JRadioButton;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;

public class finalswing {
     finalswing(){

        JFrame frame= new JFrame("Swing Frame");
        frame. setSize(400,220);
        frame.setLayout(new GridLayout(5,2,5,10));
        frame.setVisible(true);
        frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);

        JLabel label1= new JLabel("Username");
        JTextField TextArea1 =  new JTextField();
        JLabel label2= new JLabel("Password");
        JTextField TextArea2 =  new JTextField();

        JRadioButton r1 = new   JRadioButton("c++");
        JRadioButton r2 = new   JRadioButton("Java");

        JLabel radioLbl=new JLabel("Your favourite language is c++");
        ButtonGroup group1=new ButtonGroup();
        group1.add(r1);
        group1.add(r2);

        JButton button1 = new JButton("Reset");
        JButton button2 = new JButton("Login");
        r1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                radioLbl.setText("Your favourite language is c++");
            }
        });
        r1.setSelected(true);
        r2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                radioLbl.setText("Your favourite language is Java");
            }
        });

        button1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                TextArea1.setText("");
                 TextArea2.setText("");
            }
        });

        button2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                System.out.println("Username: "+ TextArea1.getText());
                 System.out.println("Password: "+ TextArea2.getText());
            }
        });

        //JLabel label3= new JLabel("Your favourite langage is ");
        frame.add(label1);
        frame.add(TextArea1);
        frame.add(label2);
        frame.add(TextArea2);
        frame.add(r1);
        frame.add(r2);
        frame.add(button1);
        frame.add(button2);

        frame.add(radioLbl);


    }

    public static void main(String[] args) {
            SwingUtilities.invokeLater(new Runnable(){
            public void run(){
                new finalswing();
            }
        });
       // new finalswing();
    }
    
}
