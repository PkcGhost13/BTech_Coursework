import java.io.*;
import java.awt.*;
import java.applet.*;

public class Q8 extends Applet {
    public void paint(Graphics g) {
        Font f = new Font("Arial", Font.BOLD, 24);
        g.setFont(f);
        g.drawString(".html path : "+(getDocumentBase()).toString(), 10, 20);
        //g.drawString(".class path : " + (getCodeBase()).toString(), 10, 50);
        g.drawString(".class path : "+(Q8.class.getClassLoader()).getResource("Q8.class"), 10, 80);
    }
}
