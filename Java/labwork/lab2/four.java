import javax.swing.*;
import java.awt.*;
 
public class four {
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                JFrame frame = new JFrame("Bresenham's Line Algorithm");
                frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
                frame.setSize(800, 600);
                frame.setLocationRelativeTo(null);
 
                JPanel panel = new JPanel() {
                    protected void paintComponent(Graphics g) {
                        super.paintComponent(g);
                        drawBresenhamLine(50, 100, 200, 200, g);
                    }
                };
 
                frame.add(panel);
                frame.setVisible(true);
            }
        });
    }
 
    public static void drawBresenhamLine(int x1, int y1, int x2, int y2, Graphics g) {
        int dx = Math.abs(x2 - x1);
        int dy = Math.abs(y2 - y1);
        int sx = (x1 < x2) ? 1 : -1;
        int sy = (y1 < y2) ? 1 : -1;
        int err = dx - dy;
 
        while (x1 != x2 || y1 != y2) {
            g.fillRect(x1, y1, 1, 1);
 
            int e2 = 2 * err;
            if (e2 > -dy) {
                err -= dy;
                x1 += sx;
            }
            if (e2 < dx) {
                err += dx;
                y1 += sy;
            }
        }
    }
} {
    
}
