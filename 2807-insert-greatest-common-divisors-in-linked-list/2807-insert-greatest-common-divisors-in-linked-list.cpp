/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
       /* itervative Approach
        if(!head || !head->next) {
            return head;
        }

        ListNode* currNode = head;
        ListNode* nextNode = head->next;

        while(nextNode) {
            ListNode* temp = new ListNode(__gcd(currNode->val, nextNode->val));

            currNode->next = temp;
            temp->next     = nextNode;

            currNode = nextNode;
            nextNode = nextNode->next;
        }

        return head;
        */
        //Recursive Approach
        // Base case: if head is null or there's only one node, return head.
        if (!head || !head->next) {
            return head;
        }

        // Recursively process the rest of the list
        ListNode* temp = insertGreatestCommonDivisors(head->next);

        // Create a new node with the GCD of current and next node values
        ListNode* gcdNode = new ListNode(__gcd(head->val, head->next->val));

        // Insert the new node between the current node and the next node
        gcdNode->next = temp;
        head->next = gcdNode;

        // Return the current node
        return head;
    }
};