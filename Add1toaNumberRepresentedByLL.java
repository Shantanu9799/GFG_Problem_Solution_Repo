/*
class Node{
    int data;
    Node next;
    
    Node(int x){
        data = x;
        next = null;
    }
} 
*/

class Solution
{
    public static Node addOne(Node head) 
    { 
        //code here.
        head = reverse(head);
        int carry = 1;
        Node temp = head , curr=null;
        while(temp != null){
            temp.data = temp.data%10 + carry;
            carry = temp.data/10;
            if(carry==1){
                temp.data = 0;
            }
            if(carry==0){
                break;
            }
            curr = temp;
            temp = temp.next;
        }
        if(carry==1){
            Node newNode = new Node(carry);
            curr.next = newNode;
        }
        head = reverse(head);
        return head;
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
