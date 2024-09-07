/*
// structure of the node is as follows

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
class Solution {
  public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        // code here
        set<int> s;
        struct Node *cur = head1;
        while(cur) {
            s.insert(cur -> data);
            cur = cur -> next;
        }
        cur = head2;
        while(cur) {
            s.insert(cur -> data);
            cur = cur -> next;
        }
        Node *newHead = new Node(0);
        cur = newHead;
        for (const int& element : s) {
            Node *newNode = new Node(element);
            cur -> next = newNode;
            cur = cur -> next;
        }
        Node* tmp = newHead;
        newHead = newHead -> next;
        delete tmp;
        return newHead;
    }
};