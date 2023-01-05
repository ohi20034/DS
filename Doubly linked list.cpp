#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int create();
int display();
int add_first();
int add_middle();
int add_last();
int search_data();
int update_data();
int delate_data();
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *temp,*head,*tail;
int N;
int main()
{
    system("cls");
    int c;
    cout<<"1. Create Linked List: "<<endl;
    cout<<"2. Display Linked List: "<<endl;
    cout<<"3. Add First: "<<endl;
    cout<<"4. Add Middle: "<<endl;
    cout<<"5. Add Last: "<<endl;
    cout<<"6. Search Data: "<<endl;
    cout<<"7. Update Data: "<<endl;
    cout<<"8. Delete Data: "<<endl;
    cin>>c;
    switch(c)
    {
    case 1:
    {
        create();
        break;
    }
    case 2:
    {
        display();
        break;
    }
    case 3:
    {
        add_first();
    }
    case 4:
    {
        add_middle();
    }
    case 5:
    {
        add_last();
    }
    case 6:
    {
        search_data();
    }
    case 7:
    {
        update_data();
    }
    case 8:
    {
        delate_data();
    }
    }
}
int create()
{
    system("cls");
    temp=NULL;
    head=NULL;
    tail=NULL;
    cout<<"Enter Node Number: ";
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cout<<"insert_front - ";
        temp=(struct node*)malloc(sizeof(struct node));
        cin>>temp->data;

        temp->next=NULL;
        temp->prev=NULL;

        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            tail->next=temp;
            temp->prev=tail;
        }
        tail = temp;
    }
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
int display()
{
    system("cls");
    temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
int add_first()
{
    int data;
    cout<<"Enter data for add first ";
    cin>>data;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head;
    temp->prev=NULL;
    head=temp;
    N++;
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
int add_middle()
{
    system("cls");
    cout<<"Enter position where you want to add data: ";
    int position,data,i=1;
    cin>>position;
    cout<<"Enter data for add: ";
    cin>>data;
    // temp = head;
    tail = head;
    for(int i=1; i<=N; i++)
    {
        if(i==position)
        {
            temp = (struct node*)malloc(sizeof(struct node));
            temp->data = data;
            temp->next=tail->next;
            tail->next=NULL;
            tail->next=temp;
            temp->prev=tail;
            N++;
        }
        i++;
        //temp = temp->next;
        tail = tail->next;
    }
    // N++;
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
int add_last()
{
    system("cls");
    cout<<"Enter data for add last ";
    int data;
    cin>>data;
    tail=head;
    for(int i=0; i<N; i++)
    {
        if(tail->next==NULL)
        {
            temp = (struct node*)malloc(sizeof(struct node));
            temp->data=data;
            temp->next=NULL;
            tail->next=temp;
            temp->prev=tail;
            N++;
            break;
        }
        tail=tail->next;
    }
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
int search_data()
{
    system("cls");
    int data,i,j=0;
    cout<<"Search data - ";
    cin>>data;
    temp = head;
    while(temp!=NULL)
    {
        if(temp->data == data)
        {
            j++;
            cout<<"DATA FOUND"<<endl;
        }
        temp = temp->next;
    }
    if(j==0)
    {
        cout<<"DATA NOT FOUND"<<endl;
    }
    cout<<endl<<"ENTER ANY KEY FOR GO BACK..";
    getch();
    main();
}
int update_data()
{
    system("cls");

    int data,update_data;
    cout<<"Enter previous data which is you want to update: ";
    cin>>data;

    cout<<"Enter updated data: ";
    cin>>update_data;

    temp = head;

    while(temp!=NULL)
    {
        if(temp->data == data)
        {
            temp->data = update_data;
        }
        temp = temp->next;
    }
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
int delate_data()
{
    tail = head;
    for(int i=0; i<N; i++)
    {
        if(tail->next->next == NULL)
        {
            tail->next = NULL;
            N-=1;
        }
        else
        {
            tail=tail->next;
        }

    }
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
