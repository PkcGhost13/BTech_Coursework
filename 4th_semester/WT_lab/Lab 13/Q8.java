import java.io.*;

public class Q8 {
    public static void main(String[] args) throws IOException {

        FileInputStream in = new FileInputStream("Coding/4th_semester/WT_lab/Lab 13/inb.txt");
        FileOutputStream out = new FileOutputStream("Coding/4th_semester/WT_lab/Lab 13/outb.txt");
        int c;
        System.out.println("Reading and Writing to file using byte stream .........");
        while ((c = in.read()) != -1) {
            System.out.print((char) c);
            out.write(c);
        }
        in.close();
        out.close();
        System.out.println("\n");
        c = 0;
        System.out.println("Reading and Writing to file using char stream .........");
        FileReader inc = new FileReader("Coding/4th_semester/WT_lab/Lab 13/inc.txt");
        FileWriter outc = new FileWriter("Coding/4th_semester/WT_lab/Lab 13/outc.txt");
        while ((c = inc.read()) != -1) {
            outc.write(c);
            System.out.print((char) c);
        }
        inc.close();
        outc.close();
    }
}

