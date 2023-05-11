/*node class of the linked list
class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}
*/
class GfG
{
   
    public static int getNth(Node node, int ind)
    {
       //Your code here
       Node curNode = node;
       while(ind-- > 1) {
           curNode = curNode.next;
       }
       return curNode.data;
    }
}