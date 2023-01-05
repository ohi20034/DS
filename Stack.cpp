#include<iostream>
#include<conio.h>
using namespace std;

int create(int n);
void display();
void pop();
typedef struct Node
{
    int data;
    struct Node *next;
}node;
node *top=NULL,*temp=NULL;

int main()
{
    int N;
    cout<<"1.Push "<<endl;
    cout<<"2.print "<<endl;
    cout<<"3.Pop "<<endl;
    cin>>N;
    switch(N)
    {
    case 1:
    {
        int n;
        cout<<"Enter element to be pushed - ";
        cin>>n;
        create(n);
        break;
    }
    case 2:
    {
        display();
        break;
    }
    case 3:
        {
            pop();
            break;
        }

    }
}
int create(int n)
{
    temp=(node*)malloc(sizeof(node));

    temp->data=n;
    temp->next=top;
    top=temp;

    cout<<endl<<"ENTER ANY KEY FOR GO BACK.."<<endl;
    getch();
    main();
}
void display()
{
    temp=top;
    cout<<"Your elements are: ";
    while(temp)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
    main();
}
void pop()
{
    top = top->next;
    main();
}
