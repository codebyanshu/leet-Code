#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 2};
    vector<int> stack;
    int top = -1;
    int k = sizeof(arr) / sizeof(int);
    for (int i = 0; i < k; i++)
    {
        if (top >= 0 && stack[top] == arr[i])
        {
            continue;
        }
        else
        {
            top++;
            stack.push_back(arr[i]);
        }
    }
    for (int i = 0; i <= top; i++)
    {
        cout<<stack[i];
    }
    

    return 0;
}
