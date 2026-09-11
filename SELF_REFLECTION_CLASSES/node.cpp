#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

int main()
{
    Node *first = nullptr;
    Node *last = nullptr;

    int choice, value;

    do
    {
        cout << "\n\n====LINKED LIST MENU====";
        cout << "\n1.create Node";
        cout << "\n2.Display List";
        cout << "\n3.Delete First Node";
        cout << "\n4.Exit";

        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter value:";
            cin >> value;

            Node *newNode = new Node(value);

            if (first == nullptr)
            {
                first = newNode;
                last = newNode;
            }
            else
            {
                last->next = newNode;
                last = newNode;
            }

            cout << "Node inserted successfully";
            break;
        }

        case 2:
        {
            if (first == nullptr)
            {
                cout << "Linked list empty";
            }
            else
            {
                Node *temp = first;

                cout << "Linked list:";

                while (temp != nullptr)
                {
                    cout << temp->data << " ";
                    temp = temp->next;
                }
            }

            break;
        }

        case 3:
        {
            if (first == nullptr)
            {
                cout << "LL is empty";
            }
            else
            {
                Node *temp = first;
                first = first->next;
                delete temp;
                cout<<"node deleted successfully";
            }

            break;
        }

        case 4:
        {
            cout << "Exiting...";
            break;
        }

        default:
        {
            cout << "Invalid choice";
            break;
        }
        }

    } while (choice != 4);

    return 0;
}