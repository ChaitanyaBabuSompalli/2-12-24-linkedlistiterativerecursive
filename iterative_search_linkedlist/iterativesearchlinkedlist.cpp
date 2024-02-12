#include <iostream>  //This line includes the input/output stream library which allows input and output operations.

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};    //This declares a struct named Node which represents a node in a linked list. It contains an integer data and a pointer next to the next node in the list. It also defines a constructor to initialize the data and next pointer of a node.

bool searchIterative(Node* head, int target) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == target)
            return true;
        current = current->next;
    }
    return false;
}   //This function searchIterative searches for a target element in a linked list iteratively. It takes a pointer to the head of the list and the target value as input. It initializes a pointer current to the head of the list and iterates through the list. If the current node's data matches the target value, it returns true. Otherwise, it moves to the next node. If the target element is not found in the list, it returns false.

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    int target = 2;
    if (searchIterative(head, target))
        std::cout << "Element " << target << " is present in the linked list." << std::endl;
    else
        std::cout << "Element " << target << " is not present in the linked list." << std::endl;

    return 0;
}

//This is the main function of the program. It creates a linked list with three nodes, each containing values 1 through 3. It then searches for the target element 2 in the linked list using the searchIterative function. If the element is found, it prints a message indicating its presence; otherwise, it prints a message indicating its absence. Finally, it returns 0, indicating successful execution of the program.