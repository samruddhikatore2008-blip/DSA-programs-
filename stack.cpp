#include <iostream>
using namespace std;
const int MAX = 5;
class stack
{
    private:
    int a[MAX];
    int top;

    public:
    stack()
    {
        top = -1;
        
    }
    void push(int x)
    {
        top++;
        a[top] = x;
    }
    int pop(void)
    {
        int x = a[top];
        top--;
        return x;

    } 
    int peek(void)
    {
        return a[top];
    }
    int full(void)
    {
        if(top == MAX - 1)
        {
            return 1;

        }
        else
        {
            return 0;
        }
        
    }
    int empty(void)
    {
        if(top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void display(void)
    {
        for(int i = top; i >= 0; i--)
        {
            cout << endl << a[i];
        }
    }

};
int main()
{
    int x;
    stack s;

    if (!s.full()) s.push(12);
    if (!s.full()) s.push(30);
    if (!s.full()) s.push(46);
    if (!s.full()) s.push(77);
    if (!s.full()) s.push(92);
    if (!s.full()) s.push(98);
    cout<< "stack elements:";
    s.display();

    if(!s.empty())
    {
        x = s.pop();
        cout << endl << "Removed:" << x;
    }
    cout << endl << "stack after pop:";
    s.display();
    
    if (!s.empty())
    {
        x = s.peek();
        cout << endl << "Top element is:" << x;
    }
    return 0;
}


OUTPUT:-

PS D:\samruddhikatore> cd 'd:\samruddhikatore\output'
PS D:\samruddhikatore\output> & .\'stack.exe'
stack elements:
92
77
46
30
12
Removed:92
stack after pop:
77
46
30
12
Top element is:77
PS D:\samruddhikatore\output> c