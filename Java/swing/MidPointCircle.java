import java.awt.Graphics;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.SwingUtilities;

public class MidPointCircle {

    MidPointCircle(int h,int w){
        JFrame frame =new JFrame("Midpoint Circle");
        frame.setSize(w, h);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Canvas canvas=new Canvas(w, h);
        frame.add(canvas);
        frame.setVisible(true);
    }
    private class Canvas extends JPanel{
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
            drawMidpointCircle(0, 100, g);
        }
        private void drawMidpointCircle(int x1,int y1,Graphics g){
            int x=x1,y=y1;
            float p=(5/4) -y;
            while(x<=y){
                plotPixel(g,x,y);
                plotPixel(g, -x, y);
                plotPixel(g, -x, -y);
                plotPixel(g, x, -y);
                plotPixel(g,y,x);
                plotPixel(g,y,-x);
                plotPixel(g,-y,-x);
                plotPixel(g,-y,x);
                if(p<0){
                    x=x+1;
                    p=p+2*x+3;
                }
                else{
                    x=x+1;
                    y=y-1;
                    p=p+2*(x-y)+5;
                }
            }
        }
            
        
    }
    
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable(){
            public void run(){
                new MidPointCircle(500, 500);
            }
        });
    }
}
