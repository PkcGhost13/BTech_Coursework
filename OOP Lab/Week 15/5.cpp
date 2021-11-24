#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#define SIZE 5

template <class T>
class Stack
{

public:
    Stack();
    void push(T k);
    T pop();
    T topElement();
    bool isFull();
    bool isEmpty();
    void display();

private:
    int top;
    T st[SIZE];
    int ind;
};
template <class T>
Stack<T>::Stack() { top = -1; ind=0;}

template <class T>
void Stack<T>::push(T k)
{
    if (isFull())
    {
        cout << "Stack is full\n";
    }

    cout << "Inserted element " << k << endl;
    ind++;
    top = top + 1;

    st[top] = k;
}
template <class T>
bool Stack<T>::isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
template <class T>
bool Stack<T>::isFull()
{
    if (top == (SIZE - 1))
        return 1;
    else

        return 0;
}
template <class T>
T Stack<T>::pop()
{

    T popped_element = st[top];
    top--;
    return popped_element;
}

template <class T>
T Stack<T>::topElement()
{
    T top_element = st[top];
    return top_element;
}
template <class T>
void Stack<T>::display()
{
    for(int i=top;i<ind;i++)
    {
        cout<<st[i]<<endl;
    }
}
int main()
{
    Stack<int> integer_stack;
    Stack<string> string_stack;
    int choice;
    do 
    {
        cout<<"\n1. Push\n2. Pop\n3.Display\n4. Top element\n5. Exit"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            int n;
            cout<<"Enter the data to be inserted : "<<endl;
            cin>>n;
            integer_stack.push(n);
            break;
        case 2:
            cout << integer_stack.pop() << " is removed from stack"
            << endl;
            break;
        case 3: 
            integer_stack.display();
            break;
        case 4:
            cout << "Top element is " << integer_stack.topElement()
            << endl;
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }
    }
    while(choice!=5);
    return 0;
}