import java.io.*;

public class Q1 {
    public static void main(String[] args) throws IOException{
        int c;
        File f=new File("in.txt");
        System.out.println("File exists : "+f.exists()
        +"\nCan read from file : "+f.canRead()
        +"\nCan write to file : "+f.canWrite()
        +"\nAbsolute Path : " + f.getAbsolutePath());
        System.out.println("Reading and Writing to file using char stream .........\n");
        FileReader inc = new FileReader(f);
        FileWriter outc = new FileWriter("out.txt");
        while ((c = inc.read()) != -1) {
            outc.write(c);
            System.out.print((char) c);
        }
        inc.close();
        outc.close();
    }
}
