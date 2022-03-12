# push_swap

Push_swap is an algorithm project at school 42. I’ll introduce this project briefly and share an algorithm to solve it : radix sort.
Advantages of this algorithm : easy to implement, stable
Disadvantages of this algorithm : passable but won’t get full score (unless you can find a way to optimize it)
Introduction
First, we start with two stacks called A and B.
A is filled with some random integers (without duplicate) and B is empty. We can perform certain instructions on these stacks, and the goal is to sort all these integers with the least instructions possible.
If the original stacks look like this
9
4
8
7
----------     ----------
a              b
Our goal is to print a list of instructions that can make the stacks sorted like this
4
7
8
9
----------     ----------
a              b
And here is the list of instructions that we can perform :
sa (swap a) : Swap the top two numbers in A
sb (swap b) : Swap the top two numbers in B
ss : sa + sb
ra (rotate a) : Top number in A goes to bottom of A
rb (rotate b) : Top number in B goes to bottom of B
rr : ra + rb
rra (reverse rotate a) : Bottom number in A goes to top of A
rra (reverse rotate b) : Bottom number in B goes to top of B
rrr : rra + rrb
pa (push a) : Top number in B goes to top of A
pb (push b) : Top number in A goes to top of B

if our instruction list is correct, we’ll be rated by the amount of instructions we use.
With 3 numbers, we need to sort it with not more than 3 instructions.
With 5 numbers, we need to sort it with not more than 12 instructions.
With 100 numbers, we can get
5 points if the size of the list of instructions is less than 700
4 points if the size of the list of instructions is less than 900
3 points if the size of the list of instructions is less than 1100
2 points if the size of the list of instructions is less than 1300
1 points if the size of the list of instructions is less than 1500
With 500 numbers, we can get
5 points if the size of the list of instructions is less than 5500
4 points if the size of the list of instructions is less than 7000
3 points if the size of the list of instructions is less than 8500
2 points if the size of the list of instructions is less than 10000
1 points if the size of the list of instructions is less than 11500
According to unreliable sources, we need to get at least 6 points to pass.
