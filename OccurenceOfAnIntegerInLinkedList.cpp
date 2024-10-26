/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        struct Node* curr = head;
        int keyCount = 0;
        while(curr) {
            if(curr -> data == key) keyCount++;
            curr = curr -> next;
        }
        return keyCount;
    }
};
