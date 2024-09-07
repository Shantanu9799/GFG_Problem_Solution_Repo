// User function template for C++

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // your code here
        if(head==NULL || head->next==NULL) return false;
        Node *slow = head, *fast = head -> next;
        while(fast && fast -> next && slow!=fast) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow == fast;
    }
};