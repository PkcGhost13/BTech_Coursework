public class Q4 {
    public static void main(String[] args) {
        StringBuffer s;
        //a
        System.out.println("Constructors of String buffer : ");
        s = new StringBuffer();
        System.out.println(s+"Capacity : "+s.capacity());
        s = new StringBuffer(10);
        System.out.println(s+"Capacity : "+s.capacity());
        s = new StringBuffer("PKC ");
        System.out.println(s + "Capacity : " + s.capacity());
        CharSequence c = new StringBuilder("Pawan Kumar ");
        s = new StringBuffer(c);
        System.out.println(s + "Capacity : " + s.capacity());
        //The above were all the StringBuffer contructors in java
        s.setLength(10);//b.1
        System.out.println("setlength(10) : "+s);
        System.out.println("charAt(6) : "+s.charAt(6));//b.2
        s.setCharAt(6, 'k');//b.3
        System.out.println("setCharAt(6,'k') : " + s);
        s.deleteCharAt(6);
        System.out.println("deleteCharAt(6) : " + s);
    }
}
