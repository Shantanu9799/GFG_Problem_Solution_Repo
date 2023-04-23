/* node for linked list

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

*/

class Solution{
    //Function to add two numbers represented by linked list.
    static Node addTwoLists(Node first, Node second){
        // code here
        // return head of sum list
        first = reverse(first);
        second = reverse(second);
        Node dummy = new Node(0);
        Node temp = dummy;
        Node l1 = first;
        Node l2 = second;
        int carry = 0;
        while(l1!=null || l2!=null || carry==1) {
            int sum = 0;
            if(l1 != null) {
                sum += l1.data;
                l1 = l1.next;
            }
            if(l2 != null) {
                sum += l2.data;
                l2 = l2.next;
            }
            sum += carry;
            carry = sum/10;
            int number = sum%10;
            Node newNode = new Node(number);
            temp.next = newNode;
            temp = newNode;
        }
        return reverse(dummy.next);
    }
    public static Node reverse(Node head){
        if(head==null || head.next == null){
            return head;
        }
        Node curr = head, prev = null , temp;
        while(curr != null){
            temp = curr.next;
            curr.next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
}