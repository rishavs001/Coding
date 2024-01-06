import javax.swing.JPanel;
import javax.swing.JFrame;
import java.awt.*;
import javax.swing.SwingUtilities;

public class DDAalgortithm {
    DDAalgortithm(int h, int w){
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
        int x1,y1,x2,y2;
        Canvas(int x1,int y1,int x2,int y2){
            this.x1=x1;
            this.x2=x2;
            this.y1=y1;
            this.y2=y2;
            this.setBackground(Color.LIGHT_GRAY);
        }
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
            drawDDALine(1, 1, 100, 100, g);
            // g.drawLine(x1,y1,x2,y2);
        }
        //algorith for dda
        private void drawDDALine(int x1,int y1,int x2,int y2,Graphics g){
            float m=(y2-y1)/(x2-x1);
            float xincr,yincr,x=x1,y=y1;
            if(m>1){
                xincr=1/m;
                yincr=1;
            }
            else if(m<1){
                xincr=1;
                yincr=m;
            }
            else{
                xincr=1;
                yincr=1;
            }
            while(x<=x2 && y<=y2){
                plotPixel(g, (int)x, (int)y);
                System.out.println(x+ " "+ y);
                x+=xincr;
                y+=yincr;
                
            }
           
        }
        
    }
    
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable(){
            public void run(){
                new DDAalgortithm(300,300);
            }
        });
    }
}
