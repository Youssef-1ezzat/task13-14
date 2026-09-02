#include <iostream>
#include <singlelinkedlist.h>
using namespace std;

int main()
{
    singlelinkedlist list;

    list.insertRight(10);
    list.insertRight(20);
    list.insertRight(30);
    list.insertRight(40);
    if(list.isEmpty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }
    list.insertRight(50);
    cout<<"Linked List: ";
    list.display();
    cout<<"Search 30: ";
    list.search(30);
    list.remove(20);
    cout<<"After remove 20: ";
    list.display();
    return 0;
}
/*We use Linked Lists instead of Arrays in some applications because they are more flexible when adding or removing elements.

Advantages of Linked Lists:
Dynamic size → A Linked List can grow or shrink during program execution, unlike a fixed-size array.
Easy insertion and deletion → We can add or remove nodes without shifting all the other elements, which can make these operations more efficient.

Short exam answer:

Linked Lists are used instead of Arrays when we need a dynamic data structure. Two advantages are dynamic size and efficient insertion/deletion without shifting elements.*/
