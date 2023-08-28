class GfG
{
    //Function to remove duplicates from sorted linked list.
    Node removeDuplicates(Node head)
    {
	// Your code here	
    	Node uniqueNode = head;
    	while(uniqueNode != null) {
    	    Node currNode = uniqueNode.next;
    	    while(currNode != null && uniqueNode.data == currNode.data) {
    	        currNode = currNode.next;
    	    }
    	    uniqueNode.next = currNode;
    	    uniqueNode = currNode;
    	}
    	return head;
    }
}