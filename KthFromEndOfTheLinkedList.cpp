/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
  
    int listLength(Node * head) {
        int len = 0;
        Node *cur = head;
        while(cur) {
            len++;
            cur = cur -> next;
        }
        return len;
    }
    
    int getKthFromLast(Node *head, int k) {
        // Your code here
        int listLen = listLength(head);
        if(k > listLen) return -1;
        int nodeToBeDeleted = listLen - k;
        Node *cur = head;
        while(nodeToBeDeleted--) {
            cur = cur -> next;
        }
        return cur -> data;
    }
};