import java.io.*;

public class Q2 {
    public static void main(String[] args) throws IOException {
        RandomAccessFile file = new RandomAccessFile("raf.txt", "rw");
        System.out.println("Writing to file char, int, double using RAF.......");
        file.writeChar(80);
        file.writeInt(13);
        file.writeDouble(10.5);
        file.seek(0);
        System.out.println("Reading from file char, int, double using RAF.......");
        System.out.println("Char : " + file.readChar() + "\nInteger : "
        +file.readInt()+"\nDouble : "+file.readDouble());
        System.out.println();
        System.out.println();
        file.close();
    }
}
