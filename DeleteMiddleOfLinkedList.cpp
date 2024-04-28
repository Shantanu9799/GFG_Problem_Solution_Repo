struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        // Your Code Here
        if(head -> next == NULL) return NULL;
        if(head -> next -> next == NULL) {
            Node * tmp = head -> next;
            head -> next = NULL;
            delete tmp;
            return head;
        }
        Node* slow = head, *fast = head;
        while (fast!=NULL && fast -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        // cout << slow -> data << endl;
        swap(slow -> data, slow -> next -> data);
        Node * tmp = slow -> next;
        slow -> next = tmp -> next;
        delete tmp;
        return head;
    }
};