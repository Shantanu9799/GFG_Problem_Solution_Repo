int LinkedListLength(struct Node *head) {
    struct Node *curr = head;
    int len = 0;
    while(curr != NULL) {
        len++;
        curr = curr -> next;
    }
    return len;
}

int fractional_node(struct Node *head, int k)
{
    int indexToGo = ceil((double)LinkedListLength(head) / (double) k);
    struct Node *curr = head;
    while (indexToGo > 1) {
        curr = curr -> next;
        indexToGo--;
    }

    return curr->data;
}