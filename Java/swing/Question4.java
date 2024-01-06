import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JRadioButton;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Question4{
    Question4(){
        JFrame frame=new JFrame("Simple swing application");
        frame.setSize(400, 220);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        frame.setLayout(new GridLayout(5,2,5,10));
        JLabel usrnameLabel=new JLabel("Username");
        JLabel passwrdLabel=new JLabel("Password");

        JTextField usernametextField=new JTextField();
        JTextField passwordtextField=new JTextField();

        JLabel radioLbl=new JLabel("Your favourite language is Java");
        JRadioButton rButton1=new JRadioButton("C++");
        rButton1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                radioLbl.setText("Your favourite language is C++");
            }
        });
        JRadioButton rButton2=new JRadioButton("Java");
        rButton2.setSelected(true);
        rButton2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                radioLbl.setText("Your favourite language is Java");
            }
        });
        ButtonGroup group1=new ButtonGroup();
        group1.add(rButton1);
        group1.add(rButton2);
        
        JButton resetButton=new JButton("Reset");
        resetButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                usernametextField.setText("");
                passwordtextField.setText("");
            }
        });
        JButton loginButton=new JButton("Login");
        loginButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                System.out.println("Username: "+usernametextField.getText());
                System.out.println("Password: "+passwordtextField.getText());
            }
        });


        frame.add(usrnameLabel);
        frame.add(usernametextField);
        frame.add(passwrdLabel);
        frame.add(passwordtextField);
        frame.add(rButton1);
        frame.add(rButton2);
        frame.add(resetButton);
        frame.add(loginButton);
        frame.add(radioLbl);
        
    }
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable(){
            public void run(){
                new Question4();
            }
        });
    }
}