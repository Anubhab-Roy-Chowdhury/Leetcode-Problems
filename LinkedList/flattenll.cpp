class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;

        while (curr) {
            if (curr->child) {
                Node* nextNode = curr->next;

                // Flatten the child list
                Node* childHead = flatten(curr->child);

                // Connect curr to childHead
                curr->next = childHead;
                childHead->prev = curr;

                // Go to the tail of the child list
                Node* childTail = childHead;
                while (childTail->next)
                    childTail = childTail->next;

                // Connect childTail to nextNode
                childTail->next = nextNode;
                if (nextNode)
                    nextNode->prev = childTail;

                // Set child to null
                curr->child = NULL;
            }

            // Move to the next node
            curr = curr->next;
        }

        return head;
    }
};