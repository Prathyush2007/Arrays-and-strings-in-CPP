# Array and String Operations in C++

**Name**: Prathyush Nimmagadda 
**PRN**: 24070123064  
**Batch**: ENTC A3  

---

## 1. Code Name: Input and Output for Array

### Theory:
Arrays are used to store multiple values of the same data type in a single variable. This program teaches basic array handling by allowing the user to input a fixed number of integers and then displaying them. The `for` loop is used to access each index of the array. Understanding how to input and retrieve data from arrays is foundational in C++ programming as it builds the base for operations like searching, sorting, and manipulating data collections.

### Algorithm:
1. Declare an integer array of size 7.
2. Use a loop to accept 7 integers from the user.
3. Use another loop to display all entered values.

### Output:
Enter 7 numbers:
3
2
3
2
1
4
5
You entered:
3
2
3
2
1
4
5

## 2. Code Name: Reversing an Array

### Theory:
Reversing an array is a classic example of array manipulation and introduces the concept of two-pointer techniques. This program accepts a dynamic number of elements, stores them in an array, and then reverses the array by swapping elements from both ends. It highlights how memory is organized linearly in arrays and helps in understanding in-place data manipulation — a critical concept in both interviews and real-world programming.

### Algorithm:
1. Input the number of elements.
2. Take array input using a loop.
3. Reverse the array using a two-pointer approach.
4. Print the reversed array.

### Output:
Please, enter the total no. you want to enter: 6
Enter the element 1: 3
Enter the element 2: 4
Enter the element 3: 4
Enter the element 4: 2
Enter the element 5: 1
Enter the element 6: 2

Reverse all elements of the array:
2 1 2 4 4 3


## 3. Code Name: Search Element in an Array

### Theory:
Searching is a fundamental operation in data structures. This program demonstrates **linear search**, which is used to find a particular value in an array by checking each element sequentially. It introduces the idea of flags (like the `found` boolean) and how conditions are handled inside loops. This logic is essential in many programming applications like validation, real-time monitoring, and user queries.

### Algorithm:
1. Declare an array of predefined elements.
2. Accept the key to search.
3. Use a loop to compare each element with the key.
4. If found, print the position; otherwise, indicate not found.

### Output:
Enter the number you want to search for: 10
Key found at location: 1


## 4. Code Name: Find Sum and Average of Elements in an Array

### Theory:
This program focuses on basic arithmetic operations using arrays. It demonstrates how to iterate through an array to accumulate values (sum) and how to perform a type cast for calculating average as a floating-point number. Understanding summation and averaging of array elements helps in statistical calculations, data analysis, and foundational logic for more complex algorithms like standard deviation and weighted mean.

### Algorithm:
1. Take input for the number of elements.
2. Store elements in an array.
3. Sum all elements using a loop.
4. Compute the average and print both.

### Output:
Enter number of elements: 6
Enter elements:
3
4
5
6
7
1
Sum of elements: 26
Average of elements: 4.33333


## 5. Code Name: Find Min and Max Element in an Array

### Theory:
Finding the minimum and maximum values in a data set is one of the most frequent and useful tasks. This program uses comparisons inside a loop to track the smallest and largest values. It is essential in optimization problems, sorting Array and String Operations in C++
Name: Prathyush Nimmagadda
PRN: 24070123064
Batch: ENTC A3

1. Code: Array Input and Output
Theory
Arrays enable storage of multiple data items of the same type under one variable name. This exercise introduces indexing by letting the user enter seven integers, then displaying them via a loop. Mastering input/output with arrays is a base requirement for further operations like sorting, filtering, and aggregation in C++.

Algorithm
Declare an integer array of size 7.

Use a loop to accept 7 integer inputs from the user.

Use a second loop to print each value in sequence.

Output
text
Enter 7 numbers:
3
2
3
2
1
4
5
You entered:
3
2
3
2
1
4
5
2. Code: Array Reversal
Theory
Reversing an array demonstrates in-place modification using the two-pointer technique. The program accepts a user-defined array, then swaps the first and last elements, working inward, to reverse the order. This method introduces the idea of direct memory manipulation—a foundation for many algorithmic solutions.

Algorithm
Input the total element count.

Gather array data via loop.

Swap elements from opposite ends, moving toward the center.

Output the reversed array.

Output
text
Please, enter the total no. you want to enter: 6
Enter the element 1: 3
Enter the element 2: 4
Enter the element 3: 4
Enter the element 4: 2
Enter the element 5: 1
Enter the element 6: 2

Reverse all elements of the array:
2 1 2 4 4 3
3. Code: Linear Search in an Array
Theory
Searching within arrays is vital for quick data retrieval. This program illustrates linear search, where each element is checked for a match with the target. It demonstrates use of loop-based traversal, conditionals, and flags for indicating if an item has been found—a core method in early-stage problem solving.

Algorithm
Define a static array of elements.

Prompt the user for a search value.

Loop through the array, comparing each element to the search key.

Inform the user of the key’s position if found, otherwise indicate it’s missing.

Output
text
Enter the number you want to search for: 10
Key found at location: 1
4. Code: Sum and Average of Array Elements
Theory
This code segment demonstrates how to aggregate numerical data in arrays using a loop to sum values, then calculates the average. Type casting ensures precision in the average calculation. These basics are stepping stones for statistical analysis and computational algorithms.

Algorithm
Input how many elements will be entered.

Store each input in an array.

Loop through the array, summing the values.

Calculate the average as a floating-point result.

Print the sum and average.

Output
text
Enter number of elements: 6
Enter elements:
3
4
5
6
7
1
Sum of elements: 26
Average of elements: 4.33333
5. Code: Finding Minimum and Maximum in an Array
Theory
Identifying the smallest and largest values in a collection is common in analytics and programmatic comparisons. This program loops through the array, continually comparing and updating the current minimum and maximum, instilling key comparison and assignment logic.

Algorithm
Input the quantity of elements (greater than 5).

Read the elements into an array.

Initialize min and max to the first array value.

Traverse the array, updating min and max as needed.

Print the final minimum and maximum.

Output
text
Enter the number of elements): 6
Enter 6 elements:
7
2
3
4
5
56
Minimum element: 2
Maximum element: 56
6. Code: Accepting and Displaying a String (char Array)
Theory
This example shows input and output of character arrays—C-style strings. Input limits to single words when using cin, demonstrating basic handling of character data, how strings are mapped to memory, and the role of the null terminator (\0) in marking string end.

Algorithm
Define a character array.

Use input to fill the array with a string.

Output the string as entered.

Output
text
Enter a string: lowercase
You entered:lowercase
7. Code: Reverse a String Manually
Theory
The program traverses a string backwards, demonstrating how to calculate string length with a loop, then use indices to display the reversed string. This logic is fundamental for more advanced text-processing techniques including recursion and buffer manipulation.

Algorithm
Read a string into a character array.

Compute the length manually.

Print characters starting from the last towards the first.

Output
text
Enter a string: malicious
Reversed string: suoicilam
8. Code: Manual String Concatenation
Theory
Here, two character arrays are combined one character at a time, emulating string concatenation without built-in functions. This process builds an understanding of character-wise operations, array bounds, and the necessity of proper null termination in C-style strings.

Algorithm
Receive two input strings.

Find the end position of the first string.

Copy characters from second string to the end of the first.

Output the resulting combined string.

Output
text
Enter first string: Ninad
Enter second string: Phatak
Concatenated string: Ninad Phatak
9. Code: Palindrome String Check
Theory
A palindrome checks for symmetry by comparing characters from the ends toward the center. This fosters skills in indexing, loop control, and logical evaluation—all relevant in text algorithms and interview tasks.

Algorithm
Input a string.

Determine length.

Compare characters at mirrored indices, moving inward.

Conclude palindrome status based on comparisons.

Output
text
Enter a string: globalissues
globalissues is not a palindrome.

Enter a string: racecar
racecar is a palindrome.
