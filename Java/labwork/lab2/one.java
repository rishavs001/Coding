import java.awt.*;
import javax.swing.*;
 
public class one extends JPanel {
    static int x1, y1, x2, y2;
 
    public one(int x1, int y1, int x2, int y2) {
        this.x1 = x1;
        this.x2 = x2;
        this.y1 = y1;
        this.y2 = y2;
    }
 
    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.drawLine(x1, y1, x2, y2);
    }
 
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                JFrame frm = new JFrame("Paint Demo");
                frm.setSize(300, 300);
                frm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
                one canvas = new one(100, 100, 200, 150);
                frm.add(canvas);
                frm.setVisible(true);
            }
        });
    }
}