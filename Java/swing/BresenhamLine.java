import javax.swing.JPanel;
import javax.swing.JFrame;
import java.awt.*;
import javax.swing.SwingUtilities;

public class BresenhamLine {
    BresenhamLine(int h, int w){
        JFrame frame=new JFrame("Paint Demo");
        // frame.setSize(300,300);
        frame.setSize(w,h);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Canvas canvas =new Canvas(100,100,200,150);
        Canvas canvas=new Canvas(w, h);
        frame.add(canvas);
        frame.setVisible(true);
    }
    private class Canvas extends JPanel {
        int w,h;
        Canvas(int w,int h){
            this.w=w;
            this.h=h;
        }
        private void plotPixel(Graphics g,int x,int y){
            g.fillRect(x+(w/2), (h/2)-y, 1, 1);
        }
        protected void paintComponent(Graphics g){
            super.paintComponent(g);
            drawBresenhamLine(1, 1, 100, 100, g);
            // g.drawLine(x1,y1,x2,y2);
        }
        private void drawBresenhamLine(int x1,int y1,int x2,int y2,Graphics g){
            int dx=(x2-x1);
            int dy=y2-y1;
            int x=x1,y=y1;
            int p=2*dy-dx ;
            while(x<=x2 && y<=y2){
                if(p<0){
                    x=x+1;
                    p=p+2*dy;
                }
                else{
                    x=x+1;
                    y=y+1;
                    p=p+2*dy-2*dx;
                }
                plotPixel(g,x,y);
            }
        }
        
    }
    
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable(){
            public void run(){
                new BresenhamLine(300,300);
            }
        });
    }
}
