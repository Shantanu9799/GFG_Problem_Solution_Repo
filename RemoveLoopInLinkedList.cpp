/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
public:
    // Function to detect a loop in the linked list.
    Node* detectLoop(Node* head) {
        if (head == NULL || head->next == NULL) return NULL;
        Node *slow = head, *fast = head;
        
        // Detect loop using Floyd's Cycle-Finding Algorithm
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) {
                return slow; // Loop detected
            }
        }
        return NULL; // No loop
    }

    // Function to remove the loop in the linked list.
    void removeLoop(Node* head) {
        Node* loopNode = detectLoop(head);
        if (loopNode == NULL) return; // No loop found, nothing to remove

        Node* ptr1 = head;
        Node* ptr2 = loopNode;
        
        // Find the start of the loop
        while (ptr1 != ptr2) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        // Find the node just before the loop starts
        while (ptr2->next != ptr1) {
            ptr2 = ptr2->next;
        }

        // Remove the loop
        ptr2->next = NULL;
    }
};
