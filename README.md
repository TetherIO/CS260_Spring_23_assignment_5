# Assingment 5 (Auto-sorting list operations)
## Max Chase

Create an array-based list or a linked-list (and a bonus for attempting both) that:

    automatically inserts values in the correct position based on some order of sorting (perhaps ascending integers or lexicographical sorting of words)

    efficiently searches for elements (likely binary search for the array list, but what about the linked-list?)
    
### Time complexity analysis (chart):
*Insert function traverses list to find position, in worst case it'll traverse to the end of list. Therefore, complexity is O(n) where n is the nodes in the list.
*list_search traverse the list to find the value, if not found, the list isn't retraversed, false is returned. 
*display, again, traverses the list once to print each value, the print function. Therefore, again, it's n operations and O(n).

![](https://github.com/TetherIO/CS260_Spring_23_assignment_5/blob/master/complexitychart.jpg)


Given the hint, that operations not having to do with the structure as O(1), I would think that all three methods will have a constant time complexity O(1). They all perform a fixed number of operations regardless of the input; the operations performed by the methods only accoess and modify the first/last nodes of the list, which remains constant as the size of the list increases.

### Requirements:

1. automatically inserts values in the correct position based on some order of sorting (perhaps ascending integers or lexicographical sorting of words)
![](https://github.com/TetherIO/CS260_Spring_23_assignment_5/blob/master/Screenshot%202023-05-08%20224644.png))
2. efficiently searches for elements (likely binary search for the array list, but what about the linked-list?)
![](https://github.com/TetherIO/CS260_Spring_23_assignment_5/blob/master/Screenshot%202023-05-08%20224915.png)

