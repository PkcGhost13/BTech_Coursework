import java.applet.*;
import java.awt.*;

public class Q6 extends Applet {
    public void paint(Graphics g) {
        g.drawRect(10, 20, 100, 100);
        g.drawString("Square", 40, 70);
        g.drawRect(150, 20, 100, 150);
        g.drawString("Rectangle", 175, 95);
        int x[] = { 300, 430, 560 };
        int y[] = { 400, 60, 400 };
        int numberofpoints = 3;
        g.drawPolygon(x, y, numberofpoints);
        g.drawString("Triangle", 410, 280);
        g.drawOval(10, 250, 150, 150);
        g.drawString("Oval", 70, 325);
        g.drawLine(10, 200, 190, 200);
        g.drawString("Line",220, 205);
    }
}
/*
 * <applet code ="Q6" width=600 height=600>
 * </applet>
 */