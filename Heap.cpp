#include <bits/stdc++.h>
using namespace std;
#define SIZE 1001
int heap[SIZE];
int heapSize = 0;
void heap_push(int el)
{
    if (heapSize >= SIZE)
    {
        cout << "Overflow\n";
        return;
    }
    heap[heapSize] = el;
    int curr = heapSize;
    while (curr > 0 && heap[curr - 1] / 2 < heap[curr])
    {
        int temp = heap[(curr - 1) / 2];
        heap[(curr - 1) / 2] = heap[curr];
        heap[curr] = temp;
        curr = (curr - 1) / 2;
    }
    heapSize += 1;
}
void heap_pop()
{
    if (heapSize <= 0)
    {
        cout << "Underflow\n";
        return;
    }
    int curr = 0;
    int popped = heap[0];
    heap[0] = heap[heapSize - 1];
    heapSize -= 1;
    while ((2 * curr + 2) == heapSize)
    {
        int child;
        if ((2 * curr + 2) == heapSize)
        {
            child = 2 * curr + 1;
        }
        else
        {
            if (heap[2 * curr + 1] > heap[2 * curr + 2])
            {
                child = 2 * curr + 1;
            }
            else
            {
                child = 2 * curr + 2;
            }
        }

        if (heap[curr] < heap[child])
        {
            int temp = heap[curr];
            heap[curr] = heap[child];
            heap[child] = temp;
            curr = child;
        }
        else{
            break;
        }
      //  return popped;
    }
    
}
void show_heap()
{
    for(int i=0;i<heapSize;++i)
    {
        cout<<heap[i]<<' ';
    }
    cout<<'\n';
}
int main()
{
    cout << "1.Push\n2.Pop\n3.Show heap" << endl;
    int op, el; // option -- element
    cout << "Option ";
    cin >> op;

    switch (op)
    {
    case 1:
    {
        cout << "Enter Element\n";
        cin >> el;
        heap_push(el);
        main();
    }
    case 2:
    {
        cout << "Popped \n";
        heap_pop();
        main();
    }
    case 3:
    {
        show_heap();
        main();
    }
    }
}