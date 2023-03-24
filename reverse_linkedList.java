

//function Template for Java



class Node {
    int value;
    Node next;
    Node(int value) {
        this.value = value;
    }
}



class Solution
{
    //Function to reverse a linked list.
    Node reverseList(Node head)
    {
        if(head == null || head.next == null){
            return head;
        }
        // code here
        Node newNode = reverseList(head.next);
        head.next.next = head;
        head.next = null;
        return newNode;
    }
}