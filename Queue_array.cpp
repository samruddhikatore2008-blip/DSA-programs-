#include <iostream>
using namespace std;

const int MAX = 5;

class queue
{
    private:
    int a[MAX];
    int front;
    int rear;
    public:
    queue()
    {
        front = -1;
        rear = -1;
    }
        int empty(void)
        {
            if (front == -1 && rear == -1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        int full(void)
        {
            if (rear == MAX - 1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        void enqueue(int x)
        {
            if(full())
            {
                cout << "\nQueue is full";
                return;
            }
            if(front == -1 && rear == -1)
            {
                front++;
                rear++;
            }
            else
            {
                rear++;
            }
            a[rear] = x;
            
        }
        int dequeue(void)
        {
            if (empty())
            {
                cout << "\nQueue is empty";
                return -1;
            }
            int x = a[front];
            if(front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front++;
            }
            return x;
        }
        int peek(void)
        {
            if(empty())
            {
                cout << "\nQueue is empty";
                return -1;
            }
            return a[front];
        }
        void display(void)
        {
            if(empty())
            {
                cout << "\nQueue is empty";
                return;
            }
            cout << "\nQueue elements:";
            for (int i = front; i<=rear; i++)
            {
                cout << "\t" << a[i];
            }
        
        }

};
int main()
{
    int x;
    queue q;

    q.enqueue(25);
    q.enqueue(63);
    q.enqueue(25);
    q.enqueue(83);
    q.enqueue(54);
    q.display();
    
    if (!q.empty())
    {
        x = q.dequeue();
        cout << "\nRemoved:" << x;
    }
    q.display();
    x = q.peek();
    cout << "\nFront element is:" << x;
    return 0;
}

//OUTPUT:-

PS D:\samruddhikatore> cd "d:\samruddhikatore\" ; if ($?) { g++ Queue_array.cpp -o Queue_array } ;if ($?) { .\Queue_array }

Queue elements: 25      63      25      83      54
Removed:25
Queue elements: 63      25      83      54
Front element is:63
PS D:\samruddhikatore> 