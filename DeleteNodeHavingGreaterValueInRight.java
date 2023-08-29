class Solution
{
    Node compute(Node head)
    {
        // your code here
        
        // first reverse the Node
        head = reverseLinkedList(head);
        int maxi = head.data;
        Node prevNode = head;
        Node currNode = head.next;
        while(currNode != null) {
            if(currNode.data >= maxi) {
                maxi = currNode.data;
                prevNode.next = currNode;
                prevNode = currNode;
            }
            currNode = currNode.next;
            // if we ended up by searching all the nodes then we've to set the value of 
            // prevNode.next as null for perfectly updating the value of prevNode.next
            if(currNode == null) {
                prevNode.next = null;
            }
        }
        return reverseLinkedList(head);
    }
    
    // reverse the Given Linked List
    Node reverseLinkedList(Node head) {
        if(head==null || head.next==null) {
            return head;
        }
        Node newNode = reverseLinkedList(head.next);
        head.next.next = head;
        head.next = null;
        return newNode;
    }
}