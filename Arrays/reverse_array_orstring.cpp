#include <iostream>
using namespace std;
void reverse_array(int arr[], int size)
{
    int a = 0;
    int b = size;
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    a++;
    b++;
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverse_array(arr, size);
    for (int j = 0; j < size; j++)
    {
        cout << arr[j];
    }
}
