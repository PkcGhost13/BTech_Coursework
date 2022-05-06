class Ex1
{
    public static void main(String[] args) {
        StringBuffer sb1 = new StringBuffer("Hello KIIT");
        StringBuffer sb2 = new StringBuffer("Hello KIIT");
        if(sb1.equals(sb2))
            System.out.print("Welcome");
        else    
            System.out.print("KIIT");
        if(sb1==sb2)
            System.out.print("KIIT");
        else
            System.out.print("Welcome");
    }
}