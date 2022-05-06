import java.io.*;
import java.awt.*;
import java.applet.*;

public class Q8 extends Applet {
    public void paint(Graphics g) {
        Font f = new Font("Arial", Font.BOLD, 24);
        g.setFont(f);
        g.drawString(".html path : C:/Rishab/Coding/WT Lab 14/Q8.html",10,50);
        //g.drawString(".class path : " + (getCodeBase()).toString(), 10, 50);
        g.drawString(".class path : C:/Rishab/Coding/WT Lab 14/" , 10, 80);
    }
}
