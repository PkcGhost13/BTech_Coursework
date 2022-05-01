import java.io.*;

public class Q4 {
    public static void main(String[] args) throws IOException {
        FileInputStream in = new FileInputStream("in.txt");
        FileOutputStream out = new FileOutputStream("out.txt");
        int c, f = 1;
        System.out.println("Reading and Writing to file using byte stream .........");
        while ((c = in.read()) != -1) {
            System.out.print((char) c);
            if (f == 1) {
                out.write(Character.toUpperCase(c));
                f = 0;
            } else
                out.write(c);
            if (c == 32 || c == 10)
                f = 1;
        }
        in.close();
        out.close();
        System.out.println("Reading output file .........");
        in = new FileInputStream("out.txt");
        while ((c = in.read()) != -1) {
            System.out.print((char) c);
        }
        in.close();
    }
}
