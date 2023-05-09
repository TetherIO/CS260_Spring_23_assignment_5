// Code originated as modified form of a conversation with ChatGPT
// Code copied and modified from Instructor's arbitraryChatgpt.cpp file
// Code modified based on following along with the in-class exercise (Assignment 5.1)



#include <iostream>

using namespace std;

// definition of the node structure
struct node {
    int data;
    node* next;
};

// define the list class
class list {
private:
    node* head;

public:
    list() {
        head = nullptr;
    }
    
    
    // Insert data into new node in list of ascending order
    void insert(int data) {
        // Create a new node with the given data
        node* new_node = new node;
        new_node->data = data;
        new_node->next = nullptr;

        // if data is less than head, insert at the beginning of the list (edge case)
        if (head == nullptr || data < head->data) { // checks epmy list or new node less than th
            new_node->next = head;
            head = new_node;
            return;
        }

        // inserting new node
        node* current = head;

        if(head == NULL) {
            head=new_node;
            } else{
                for (int i = 0; data < current->next->data && current != NULL; i++) {
                    current = current->next;
                }

                new_node->next = current->next;
                current->next = new_node;
            }

        }



        // if the position is invalid, do not insert
        if (current == NULL) {
            cout << "Invalid position" << endl;
            delete new_node;
            return;
        }

        // insert the new node at the position


    void display() {
        node* current = head;

        if

        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    list my_list;

    // insert some nodes
    my_list.insert(1, 0);
    my_list.display();

    my_list.insert(2, 1);
    my_list.display();

    my_list.insert(3, 1);
    my_list.display();

    my_list.insert(4, 3);
    my_list.display();

    my_list.insert(5, 2);
    my_list.display();

    // after end of list
    my_list.insert(6, 100);
    my_list.display();

    // at the head
    my_list.insert(7, 0);
    my_list.display();

    // before the head
    my_list.insert(8, -10);
    my_list.display();

    return 0;
}
