# Assingment 5 (Auto-sorting list operations)
## Max Chase

Create an array-based list or a linked-list (and a bonus for attempting both) that:

    "automatically inserts values in the correct position based on some order of sorting (perhaps ascending integers or lexicographical sorting of words)"

    "efficiently searches for elements (likely binary search for the array list, but what about the linked-list?)"
    
### Tests:
In class, I think our process and tests were pretty solid. I quickly whipped up a few tests and console output to show tests:
    1. Insert various elements in a random order and use display function to iterate through and print each.
    2. Search for items in and not in the list, expected output would be True, False.
    

![](https://github.com/TetherIO/CS260_Spring_23_assignment_5/blob/master/tests.png)
   
![](https://github.com/TetherIO/CS260_Spring_23_assignment_5/blob/master/terminaloutput.png)

    
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

