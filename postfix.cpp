#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
class stack
{
    private:
    int arr[100];
    int top;

    public:
    stack()
    {
        top = -1;

    }
    void push(int val)
    {
        top++;
        arr[top] = val;
    }
    int pop()
    {
        int p = arr[top];
        top--;
        return(p);
    }

};
int evaluate(char x,int op1,int op2)
{
    if(x == '+')
    return(op1 + op2);

    if(x == '-')
    return(op1 - op2);
    
    if(x == '*')
    return(op1 * op2);

    if(x == '/')
    return(op1/op2);

    if(x == '%')
    return(op1 % op2);

    if(x == '$')
    return(pow(op1 ,op2));

    return 0;

}
int main(void)
{
    stack s;
    char x;
    int op1, op2, val;
cout << "\nEnter postfix expressions:";
while((x = getchar()) != '\n')
{
    if (isdigit(x))
    {
        s.push(x - 48);
    }
    else
    {
        op2 = s.pop();
        op1 = s.pop();

        val = evaluate(x, op1, op2);
        s.push(val);
    }
}
val = s.pop();
cout << "\nAnswer =" << val;
return 0;
}

OUTPUT:-
PS D:\samruddhikatore> cd 'd:\samruddhikatore\output'
PS D:\samruddhikatore\output> & .\'postfix.exe'

Enter postfix expressions:34+67

Answer =7
PS D:\samruddhikatore\output> cd 'd:\samruddhikatore\output'
PS D:\samruddhikatore\output> & .\'postfix.exe'

Enter postfix expressions:67-43

Answer =3
PS D:\samruddhikatore\output> cd 'd:\samruddhikatore\output'
PS D:\samruddhikatore\output> & .\'postfix.exe'

Enter postfix expressions:34*65

Answer =5
PS D:\samruddhikatore\output> cd 'd:\samruddhikatore\output'
PS D:\samruddhikatore\output> & .\'postfix.exe'

Enter postfix expressions:45%32

Answer =2
PS D:\samruddhikatore\output> cd 'd:\samruddhikatore\output'
PS D:\samruddhikatore\output> & .\'postfix.exe'

Enter postfix expressions:87/34

Answer =4
PS D:\samruddhikatore\output> cd 'd:\samruddhikatore\output'
PS D:\samruddhikatore\output> & .\'postfix.exe'

Enter postfix expressions:23$54

Answer =4
PS D:\samruddhikatore\output> c