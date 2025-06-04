/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function hasCycle(head: ListNode | null): boolean {
    let set = new Set<ListNode>()
    let currNode = head
    while(currNode && currNode.next){
        if(set.has(currNode)){
            return true
        }
        set.add(currNode)
        currNode = currNode.next
    }
    return false
};
