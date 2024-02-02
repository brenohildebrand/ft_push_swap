# Solution

// https://medium.com/@julien-ctx/push-swap-an-easy-and-efficient-algorithm-to-sort-numbers-4b7049c2639a

The problem is to use the least amount of moves possible.

The main thing is to loop a stack and for each item loop the other stack looking for the cheapest move to put in order.

There are some optimizations though.

Okay, let's solve it.

The first case is when there's just one item in the first stack. It's ordered.

Second case is when there's just two items in the first stack. Check
if it's ordered and if it's not order it.

Third case is when there are three items in the stack.

-> A B C -> nothing
-> A C B -> sa -> C A B -> ra -> nothing
-> B A C -> sa -> nothing
-> B C A -> rra -> nothing
-> C A B -> ra -> nothing
-> C B A -> sa -> B C A -> rra -> nothing

Fourth case is when there are four items in the stack.

Push 1 to stack B, solve stack A for three and push from stack B to stack A in the right position.

Fifth case is when there are five.

Push 2 to stack B. Solve stack A for three and push from stack B to stack A in the right position.

------

Then for more than 5 do the following:

-> create another stack and sort it to know the exact final position of each number.

-> find the longest subsquence that is already in the final order and keep it. Push all other numbers to stack B.

-> calculate the price for each number in stack B to be in it's correct position in stack A. Push the cheapest.

-> keep doing it till stack B is empty.

-> reorder stack A to make sure the least number is at the top.

-> done!