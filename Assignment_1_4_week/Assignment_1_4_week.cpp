#include <iostream> // Include input/output stream library

#include <vector> // Include vector library for dynamic arrays

#include <queue> // Include queue library for queue data structure

using namespace std; // Using standard namespace



class DynamicDataStructureApp { // Define a class named DynamicDataStructureApp

public:

    void run() { // Define a function named run

        cout << "Choose a data structure:" << endl; // Display a prompt to choose a data structure

        cout << "1. List" << endl; // Display option 1 for List

        cout << "2. Linked List" << endl; // Display option 2 for Linked List

        cout << "3. Array" << endl; // Display option 3 for Array

        cout << "4. Stack" << endl; // Display option 4 for Stack

        cout << "5. Queue" << endl; // Display option 5 for Queue

        cout << "6. Binary Tree" << endl; // Display option 6 for Binary Tree



        int choice; // Declare an integer variable named choice

        cin >> choice; // Read user's choice from input



        switch (choice) { // Start switch statement based on user's choice

        case 1:

            handleList(); // Call handleList function for option 1

            break;

        case 2:

            handleLinkedList(); // Call handleLinkedList function for option 2

            break;

        case 3:

            handleArray(); // Call handleArray function for option 3

            break;

        case 4:

            handleStack(); // Call handleStack function for option 4

            break;

        case 5:

            handleQueue(); // Call handleQueue function for option 5

            break;

        case 6:

            handleBinaryTree(); // Call handleBinaryTree function for option 6

            break;

        default:

            cout << "Invalid choice." << endl; // Display message for invalid choice

        }

    }



private:

    void handleList() { // Define handleList function

        vector<int> list; // Declare a vector named list to store integers

        int size; // Declare an integer variable named size

        cout << "Enter the size of the list: "; // Prompt user to enter the size of the list

        cin >> size; // Read user's input for list size



        cout << "Enter data for the list (separated by spaces): "; // Prompt user to enter data for the list

        for (int i = 0; i < size; ++i) { // Iterate from 0 to size - 1

            int data; // Declare an integer variable named data

            cin >> data; // Read user's input for each element

            list.push_back(data); // Add each element to the end of the list

        }



        cout << "List: "; // Display message indicating the list

        for (int num : list) { // Iterate through each element in the list

            cout << num << " "; // Display the element followed by a space

        }

        cout << endl; // Move to the next line

    }



    void handleLinkedList() { // Define handleLinkedList function

        class Node { // Define a nested class named Node

        public:

            int data; // Declare an integer variable named data

            Node* next; // Declare a pointer to Node named next

            Node(int data) : data(data), next(nullptr) {} // Constructor to initialize data and next

        };



        Node* head = nullptr; // Declare a pointer to Node named head and initialize it to nullptr

        int size; // Declare an integer variable named size

        cout << "Enter the size of the linked list: "; // Prompt user to enter the size of the linked list

        cin >> size; // Read user's input for linked list size



        cout << "Enter data for the linked list: "; // Prompt user to enter data for the linked list

        for (int i = 0; i < size; ++i) { // Iterate from 0 to size - 1

            int data; // Declare an integer variable named data

            cin >> data; // Read user's input for each element

            Node* newNode = new Node(data); // Create a new Node with the input data

            if (head == nullptr) { // If the linked list is empty

                head = newNode; // Set the new node as the head

            }

            else { // If the linked list is not empty

                Node* temp = head; // Declare a pointer to Node named temp and initialize it to head

                while (temp->next != nullptr) { // Traverse to the end of the linked list

                    temp = temp->next; // Move to the next node

                }

                temp->next = newNode; // Set the next pointer of the last node to the new node

            }

        }



        cout << "Linked List: "; // Display message indicating the linked list

        Node* temp = head; // Declare a pointer to Node named temp and initialize it to head

        while (temp != nullptr) { // Traverse the linked list until the end

            cout << temp->data << " "; // Display the data of the current node followed by a space

            temp = temp->next; // Move to the next node

        }

        cout << endl; // Move to the next line



        // Free memory
        //changes
        while (head != nullptr) { // Loop until head is nullptr

            Node* temp = head; // Declare a pointer to Node named temp and initialize it to head

            head = head->next; // Move head to the next node

            delete temp; // Delete the current node

        }

    }



    void handleArray() { // Define handleArray function

        int* arr; // Declare a pointer to integer named arr

        int size; // Declare an integer variable named size

        cout << "Enter the size of the array: "; // Prompt user to enter the size of the array

        cin >> size; // Read user's input for array size



        arr = new int[size]; // Dynamically allocate memory for the array



        cout << "Enter data for the array: "; // Prompt user to enter data for the array

        for (int i = 0; i < size; ++i) { // Iterate from 0 to size - 1

            cin >> arr[i]; // Read user's input for each element

        }



        cout << "Array: "; // Display message indicating the array

        for (int i = 0; i < size; ++i) { // Iterate through each element in the array

            cout << arr[i] << " "; // Display the element followed by a space

        }

        cout << endl; // Move to the next line



        delete[] arr; // Free the dynamically allocated memory

    }



    void handleStack() { // Define handleStack function

        vector<int> stack; // Declare a vector named stack to store integers

        int size; // Declare an integer variable named size

        cout << "Enter the size of the stack: "; // Prompt user to enter the size of the stack

        cin >> size; // Read user
