#include <iostream>
using namespace std;

int main()
{
    int n, a[100], temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Bubble Sort
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

output 

PS D:\samruddhikatore> cd 'd:\samruddhikatore\output'
PS D:\samruddhikatore\output> & .\'bubble_sort.exe'
Enter number of elements: 5
Enter elements: 40
30
20
100
50
Sorted array: 20 30 40 50 100 
PS D:\samruddhikatore\output> 
