    min-heap/max-heap
    //
    complete-tree property (very important!)
    means that we can implement a heap using a plain array!
    heap = [-1, root, l1, r1, ll1, rl1, ....]
    // finding children
            i ==> i * 2 (left child of i)
            i ==> (i * 2) + 1 (right child of i)

   // find parents
            i / 2
          i * 2 / 2 = i
                  14 / 2 =       7
                  15 / 2 = 7.5 = 7
            ((i * 2) + 1 )/ 2 = i

    question: 
    what if we implemented a binary tree with an array like we implemented a heap?
    // this is a bad idea... why would an unbalanced tree be a problem?



// counting inversions
    do

        swapped = false

        for i = 1 to indexOfLastUnsortedElement-1

            if leftElement > rightElement

                swap(leftElement, rightElement)

                swapped = true
                 inversions++

    while swapped


        return 0;


finding the kth largest element

    [5, 4, 3, 2, 1] ==>> 3rd largest in sorted order
    [2, 1, 5, 4, 3] ==>> 3rd largest in sorted order
    [2, 3, 1, 5, 4] ==>> 3rd largest in sorted order

    when time complexity involves a log
    it usually means Trees, heaps (tree-like), divide-and-conquer algorithms

    approach 1 - BST:
    into a binary search Tree -> inorder traversal -> get *sorted* array
    [1, 2, 3, 4, 5] -> getting the 3rd largest is easy, array[2]

    approach 2 - heap:
    put values into a max-heap -> 1st largest is root. (nlogn)
    could look at the children of the root, but thats not very general
    2nd largest - remove the root (largest), now the new root is 2nd largest
    3rd largest - remove the root again (2nd largest), root is now 3rd largest.


  merging k lists of length m

approach 1 - using mergesort like list merge

    1 : [ ...contains up to m elements  ]
    2 : [   ]
    3 : [   ]
    ...
    k : [   ]

    [      .............    ]

    [ 4, 6, 6, 8 ] -
    [ 3, 5, 5, 7, 9 ]
    [ .... ]

    O(mk)
    [ 1, 3,                   ]
    [ 1, 3, 4, 5, 5, 6, 6, 7, 8, 9 ]

approach 2 - put everything into a heap and then pull them out, heapsort style
O(km log k) ?


}
