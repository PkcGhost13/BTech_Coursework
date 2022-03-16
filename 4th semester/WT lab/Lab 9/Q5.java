class Stack 
{
    static final int MAX = 10;
    int top;
    int a[] = new int[MAX]; 
    Stack()
    {
        top = -1;
    }
    boolean Empty()
    {
        return (top < 0);
    }
    boolean push(int x)
    {
        if (top >= (MAX - 1)) 
        {
            System.out.println("Stack Overflow");
            return false;
        }
        else 
        {
            a[++top] = x;
            System.out.println(x + " pushed into stack");
            return true;
        }
    }
 
    int pop()
    {
        if (top < 0) 
        {
            System.out.println("Stack Underflow");
            return 0;
        }
        else 
        {
            int x = a[top--];
            return x;
        }
    }
 
    int top()
    {
        if (top < 0) 
        {
            System.out.println("Stack Underflow");
            return 0;
        }
        else 
        {
            int x = a[top];
            return x;
        }
    }
    
    void display()
    {
        for(int i = top;i> -1;i--)
        {
            System.out.print(" "+ a[i]);
        }
    }
}

class Q5
{
    public static void main(String args[])
    {
        Stack s = new Stack();
        s.push(13);
        s.push(26);
        s.push(39);
        System.out.println(s.pop() + " Popped from stack");
        System.out.println("Top element is : " + s.top());
        System.out.print("Elements present in stack :");
        s.display();
    }
}