#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node * next;
};


void print_list(Node * n) {
    while (n != NULL) {
        cout << n->data << "\n";
        n = n->next;
    }
}


int main() 
{
    system("clear");
    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;
    Node * fourth = NULL;
    Node * fifth = NULL;
    Node * sixth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();
    sixth = new Node();
    
    
    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = fourth;
    
    fourth->data = 40;
    fourth->next = fifth;
    
    fifth->data = 50;
    fifth->next = sixth;
    
    sixth->data = 60;
    sixth->next = NULL;
    

    
    cout << "The list contains :" << endl;
    print_list(head);

    
}