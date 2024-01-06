import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Question3{
    Question3(){
        JFrame frame=new JFrame("Simple swing application");
        frame.setSize(400, 180);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        frame.setLayout(new GridLayout(3,2,5,10));

        JLabel usrnameLabel=new JLabel("Username");
        JLabel passwrdLabel=new JLabel("Password");

        JTextField usernametextField=new JTextField();
        JTextField passwordtextField=new JTextField();

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
        frame.add(resetButton);
        frame.add(loginButton);
        
    }
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable(){
            public void run(){
                new Question3();
            }
        });
    }
}