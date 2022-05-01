import java.io.*;

public class Q3 {
    public static void main(String[] args) throws IOException {
        FileInputStream file = new FileInputStream(args[0]);
        int c;
        System.out.println("Reading and Writing to file using byte stream .........");
        while ((c = file.read()) != -1) {
            System.out.print((char) c);
        }
        file.close();
    }
}
//cd "c:\Pawan\GitHub\Coding\4th_semester\WT_lab\Lab 14\" ; if ($?) { javac Q3.java } ; if ($?) { java Q3 in.txt }