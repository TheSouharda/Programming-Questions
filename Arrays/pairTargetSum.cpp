#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int num = 0, key = 0;

    cout << "Enter the num" << endl;
    cin >> num;

    cout << "Enter the key" << endl;
    cin >> key;
    int arr[num];

    int beg = 0, end = 0;

    cout << "Enter a sorted array " << endl;
    for (int i = 0; i < num; i++)
    {

        cin >> arr[i];
    }

    beg = 0;
    end = num - 1;
    while (beg < end)
    {
        cout << "hello";
        if (arr[beg] + arr[end] == key)
        {
            cout << beg << " " << end;
            break;
        }

        else if (arr[beg] + arr[end] > key)
        {
            end--;
        }

        else if (arr[beg] + arr[end] < key)
        {
            beg++;
        }
        else
        {
            cout << "Not present in the array " << endl;
        }
    }
    return 0;
}