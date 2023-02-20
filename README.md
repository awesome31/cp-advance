# Competetive Programming

## Complexity Analysis

### Why is it important?

There are multiple ways to solve a specific programming problem given to us. Also every problem comes with a set of constraints. Hence it becomes very important to understand and to figure out the complexity of an algorithm and then we can choose the one that fits our needs.

### How do we do it?

There are 2 ways:

1. I do an absolute time comparision of the algorithm. This is called experimental analysis.
2. Theoritical analysis.

Theorotical analysis in computer science is done using the Big O notation. This notation helps us visualise the space and time complexity of an algorithm based on the input for the problem.

### Avoiding TLE(Time limit exceeded errors)

Always a good excercise to do.

1. Usually in any competetive coding environment, we are given a time limit constraint which is usally 1second.
2. In 1second we are able to 10^8 operations (100 million operations)
3. Always check for N in the question. Usually with N and with the constraints we will be able to figure out the time complexity of the algorithm that we are looking for.
4. 10 power 6 constraint usually means an NlogN complexity and 10 power 8 means O(N) or O(log N)

### Containers

Things to know:

- Arrays and Vectors are continous memory locations whereas linked List and lists are non contiguous.
- Set stores only unique elements. Multi sets can store duplicate values. Sets are usually sorted. It uses Balanced tree structure.
- Map is used to store a collection of key value pairs. Maps are sorted by keys. BST is used internally. Multimaps can have multiple key names.
- Unordered associative containers are for saving data in an unordered fashion.
- Containers adaptors: Stack, Queue, Priority Queue are just implementations on top of the other containers.
