class A
{
    void display()
    {
        System.out.println("Inside A's display method");
    }
}
class B extends A
{
    void display()
    {
        System.out.println("Inside B's display method");
    }
}
class C extends A
{
    void display()
    {
        System.out.println("Inside C's display method");
    }
}
class Q1
{
    public static void main(String args[])
    {
        A a = new A();
        B b = new B();
        C c = new C();
        A ref;
        ref = a;
        ref.display();
        ref = b;
        ref.display();
        ref = c;
        ref.display();
    }
}