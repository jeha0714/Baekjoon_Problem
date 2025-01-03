PROBLEM
======
Absolute heap is a data structure that supports following operations.

1. Insert the integer x ( x ≠ 0 ) into the array
2. Print the value with the smallest absolute value in the array and remove it from the array. If there are multiple minimum values, print the smallest one and remove it from the array.

The program starts with an empty array initially.


INPUT
======
The first line provides N ( 1 ≤ N ≤ 100,000 ), which represents the number of operations.
The next N lines provide an integer x, which represents information about the operation.
If x is not equal to 0, it means inserting x into the array. If x is equal to 0, it means printing the smallest absolute value in the array and removing it from the array.
The input integer will be greater than -2147483647 and smallest than 2147483647.

OUTPUT
======
Print the result for each occurrence of 0 in the input.
If the array is empty and you are asked to print the smallest absolute value, you should print 0.

SOURCE LINK
======
https://www.acmicpc.net/problem/11286
