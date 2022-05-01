import java.io.*;

public class Q10 {
    public static void main(String[] args) throws IOException {
        RandomAccessFile file = new RandomAccessFile("inb.txt", "r");
        long n = file.length() - 1;
        int i = 0;
        while (n >= 0) {
            if (n == -1)
                break;
            else {
                file.seek(n);
                i = file.read();
                n = n - 1;
                System.out.print((char) i);
            }
        }
        file.close();
    }
}
