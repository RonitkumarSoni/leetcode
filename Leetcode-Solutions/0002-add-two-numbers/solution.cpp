class Solution {
public:
    ListNode* addTwoNumbers(ListNode* firstList, ListNode* secondList) {
        
        ListNode* dummyNode = new ListNode(0);
        ListNode* current = dummyNode;

        int carry = 0;

        while (firstList != NULL || secondList != NULL || carry != 0) {

            int sum = carry;

            if (firstList != NULL) {
                sum += firstList->val;
                firstList = firstList->next;
            }

            if (secondList != NULL) {
                sum += secondList->val;
                secondList = secondList->next;
            }

            int digit = sum % 10;
            carry = sum / 10;

            current->next = new ListNode(digit);
            current = current->next;
        }

        return dummyNode->next;
    }
};
