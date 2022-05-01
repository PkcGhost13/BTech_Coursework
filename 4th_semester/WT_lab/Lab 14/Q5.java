import java.applet.*;
import java.awt.*;

public class Q5 extends Applet {
    String s;
    Font f;
    public void init() {
        f = new Font("Arial", Font.BOLD, 24);
        System.out.println("Inside init method");
    }

    public void start() {
        s = "Welcome to Java Applet";
        System.out.println("Inside start method");
    }

    public void paint(Graphics g) {
        g.setFont(f);
        System.out.println("Inside paint method");
        g.drawString(s, 25, 50);
    }

    public void stop() {
        System.out.println("Inside stop method");
    }

    public void destroy() {
        System.out.println("Inside destroy method");
    }
}
/*
<applet code="Q5.class" height=300 width=400>
</applet>
*/