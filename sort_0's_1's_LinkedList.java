/*
class Node
{
    int data;
    Node next;
    Node(int data)
    {
        this.data = data;
        next = null;
    }
}
*/
class Solution
{
    //Function to sort a linked list of 0s, 1s and 2s.
    static Node segregate(Node head)
    {
        // add your code here
        int cntZero = 0;
        int cntOne = 0;
        int cntTwo = 0;
        Node cur = head;
        while(cur != null) {
            if(cur.data == 0) {
                cntZero++;
            } else if(cur.data == 1) {
                cntOne++;
            } else if(cur.data == 2) {
                cntTwo++;
            }
            cur = cur.next;
        }
        
        cur = head;
        while(cntZero-- > 0) {
            cur.data = 0;
            cur = cur.next;
        }
        while(cntOne-- > 0) {
            cur.data = 1;
            cur = cur.next;
        }
        while(cntTwo-- > 0) {
            cur.data = 2;
            cur = cur.next;
        }
        return head;
        
    }
}