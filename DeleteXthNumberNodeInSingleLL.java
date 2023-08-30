/* Linklist node structure
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}*/

/*You are required to complete below method*/

class GfG
{
    Node deleteNode(Node head, int x)
    {
    	// Your code here	
    	if(x == 1) {
    	    head = head.next;
    	    return head;
    	}
    	Node node = head;
    	--x;
    	while(x-- > 1) {
    	    node = node.next;
    	}
    	node.next = node.next.next;
    	return head;
    }
}