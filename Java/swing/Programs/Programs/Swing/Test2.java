import java.awt.*;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.SwingUtilities;

public class Test2 {
    private class Canvas extends JPanel {
        int w, h;
        
        Canvas(int w, int h) {
            this.w = w;
            this.h = h;
        }

        private void plotPixel(Graphics g, int x, int y) {
            g.fillRect(x+(w/2), y+(h/2), 1, 1);
        }

        void drawBresenhamsCircle(int cx, int cy, int r, Graphics g) {
            int x, y, d;
            y = r;
            x = 0;
        
            plotPixel(g, x, y);
            d = (3-2*(int)r);
            while (x <= y) {
                if (d <= 0) {
                    d = d + (4*x + 6);
                } else {
                    d = d + 4*(x-y) + 10;
                    y--;
                }
                x++;
        
                plotPixel(g, cx+x, cy+y);
                plotPixel(g, cx-x, cy+y);
                plotPixel(g, cx+x, cy-y);
                plotPixel(g, cx-x, cy-y);
                plotPixel(g, cy+y, cx+x);
                plotPixel(g, cy-y, cx+x);
                plotPixel(g, cy+y, cx-x);
                plotPixel(g, cy-y, cx-x);
            }   
        }

        protected void paintComponent(Graphics g) {
            super.paintComponent(g);
            drawBresenhamsCircle(-50, -50, 50, g);
            drawBresenhamsCircle(0, 0, 50, g);
            drawBresenhamsCircle(-30, 10, 50, g);
        }
    }

    Test2(int h, int w) {
        JFrame frm = new JFrame("Paint Demo");
        frm.setSize(w, h);
        frm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        Canvas canvas = new Canvas(w, h);
        frm.add(canvas);
        frm.setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Test2(600, 600);
            }
        });
    }
}
