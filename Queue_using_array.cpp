#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
void Insert();
void Delete();
void Display();

int qu[100], n = 100, front = -1, rear = -1;
int main()
{
    int ch;
    cout << endl;
    cout << "1. Insert  " << endl;
    cout << "2. Delete  " << endl;
    cout << "3. Display " << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
    {
        Insert();
        break;
    }
    case 2:
    {
        Delete();
        break;
    }
    case 3:
    {
        Display();
        break;
    }
    default:
    {
        cout << "Invalid Choice" << endl;
    }
    }
}
void Insert()
{
    int data;
    if (rear == n - 1)
        cout << "Queue overflow" << endl;
    else
    {
        if(front == -1)
           front = 0;

        cout << "Insert the element in queue: ";
        cin >> data;
        rear++;
        qu[rear] = data;
    }
    cout << endl
         << "ENTER ANY KEY FOR GO BACK..";
    getch();
    cout << endl;
    main();
}
void Delete()
{
    if (front == -1 || front > rear)
    {
        cout << "queue underflow";
        return;
    }
    else
    {
        cout << "Element deleted from queue is: " << qu[front] << endl;
        for (int i = 0; i < rear; i++)
        {
            qu[i] = qu[i + 1];
        }
        rear--;
    }
    cout << endl
         << "ENTER ANY KEY FOR GO BACK..";
    getch();
    main();
}
void Display()
{
    if (front == -1)
        cout << "Queue is empty" << endl;
    else
    {
        cout << "Queue element are: ";
        for (int i = front; i <= rear; i++)
        {
            cout << qu[i] << " ";
        }
        cout << endl;
    }
    cout << endl
         << "ENTER ANY KEY FOR GO BACK..";
    getch();
    main();
}
