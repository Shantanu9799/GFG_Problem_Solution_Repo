struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node* reverseList(Node* head) {
        if (head == NULL || head->next == NULL)
            return head;

        Node* remainList = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;

        return remainList;
    }

    struct Node* mergeResult(Node* node1, Node* node2) {
        Node* curr1 = node1, *curr2 = node2;
        Node* dummy = new Node(); // Initialize dummy node
        Node* mergedList = dummy; // Store the head of the merged list

        while (curr1 != NULL && curr2 != NULL) {
            if (curr1->data < curr2->data) {
                dummy->next = curr1;
                curr1 = curr1->next;
            } else {
                dummy->next = curr2;
                curr2 = curr2->next;
            }
            dummy = dummy->next;
        }

        while (curr1 != NULL) {
            dummy->next = curr1;
            curr1 = curr1->next;
            dummy = dummy->next;
        }

        while (curr2 != NULL) {
            dummy->next = curr2;
            curr2 = curr2->next;
            dummy = dummy->next;
        }

        return reverseList(mergedList->next); // Return the head of the merged and reversed list
    }
};