class Solution
{
    //Function to sort a linked list of 0s, 1s and 2s.
    static Node segregate(Node head)
    {
        // add your code here
        int zero = 0;
        int one = 0;
        int two = 0;
        Node currNode = head;
        while(currNode != null) {
            if(currNode.data == 0) {
                zero++;
            }
            if(currNode.data == 1) {
                one++;
            }
            if(currNode.data == 2) {
                two++;
            }
            currNode = currNode.next;
        }
        currNode = head;
        while(zero-- > 0) {
            currNode.data = 0;
            currNode = currNode.next;
        }
        while(one-- > 0) {
            currNode.data = 1;
            currNode = currNode.next;
        }
        while(two-- > 0) {
            currNode.data = 2;
            currNode = currNode.next;
        }
        return head;
    }
}