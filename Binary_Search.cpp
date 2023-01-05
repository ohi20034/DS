#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size; 

    cout << "Enter the size of array: ";
    cin >> size;
    int ar[size]; 
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++) // input array
    {
        cin >> ar[i];
    }
    int data; // for check 
    cout << "Enter data for check: ";
    cin >> data;
    int start = 0; // start index number
    int end = size - 1;  // last index number
    int cnt = 0;
    while(start <= end)
    {
        int mid = ( start + end ) / 2;

        if(ar[mid] == data)
        {
            cnt++;
            break;
        }
        else if(ar[mid] > data)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if(cnt == 0)
    {
        cout << "Data is not FOUND" << endl;
    }
    else
    {
        cout << "Data is FOUND" << endl;
    }
}