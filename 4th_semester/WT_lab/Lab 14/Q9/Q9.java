import java.applet.*;
import java.awt.*;

public class Q9 extends Applet {

    public void paint(Graphics g) {
        Font f = new Font("Arial", Font.BOLD, 13);
        g.setFont(f);
        g.drawString(getParameter("SRollNo"), 50, 50);
        g.drawString(getParameter("SName"), 50, 70);
        g.drawString(getParameter("SMarks"), 50, 90);
        g.drawString(getParameter("SGrade"), 50, 110);
    }

}