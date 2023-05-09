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
            head = new_node; // sets new node as head once pointer to previous 'head' established
            return;
        }

        // inserting new node
        node* current = head;

        while (current->next != nullptr && data > current->next->data) { // checks if next node exists and data greater than data of next node
            current = current->next;  // will point to node after which new node should be inserted
        }

        new_node->next = current->next; // sets next pointer of new node to node that comes after current node
        current->next = new_node; // current now can point to new node, allows for insert of new node between current and current->next
    }


// Binary search of linked list
    bool list_search(int searched) {
        node* current = head; // sets current node pointer
        while (current != nullptr) {
            if (current ->data == searched) {
                return true; // returns boolean value if found, but does not include the depth of the node (perhaps implementing that later if needed?)
            }
            current = current->next; // if not found, continues through list until nullptr reached
        }
        return false; // returns false if no values in loop matched (that would have caused true to return
    }


    // copied from the instructor's demo, updated with my nullptr usage
    void display() {
        node* current = head;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    };

int main() {
    list my_list;

    // insert some nodes
    my_list.insert(1);
    my_list.display();

    my_list.insert(2);
    my_list.display();

    my_list.insert(3);
    my_list.display();

    my_list.insert(4);
    my_list.display();

    my_list.insert(5);
    my_list.display();

    // after end of list
    my_list.insert(6);
    my_list.display();

    // at the head
    my_list.insert(7);
    my_list.display();

    // before the head
    my_list.insert(8);
    my_list.display();

    return 0;
}
