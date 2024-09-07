/* Link list Node:
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
class Solution {
  public:
  
    Node* getMiddle(Node* head) {
        // code here
        Node* slow = head, *fast = head;
        while(fast && fast -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    
    Node* deleteMid(Node* head) {
        // Your Code Here
        if(head==NULL || head -> next==NULL) return NULL;
        Node* prev = head;
        Node* toBeDeleted = getMiddle(head);
        while(prev -> next != toBeDeleted) {
            prev = prev -> next;
        }
        prev -> next = prev -> next -> next;
        delete toBeDeleted;
        return head;
    }
};