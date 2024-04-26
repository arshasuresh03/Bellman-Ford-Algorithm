# Bellman-Ford-Algorithm
Bellman-Ford algorithm finds the shortest paths from a single source vertex to all other vertices in a weighted graph, handling negative weight edges and detecting negative weight cycles.

Here's a step-by-step breakdown of the Bellman-Ford algorithm code:

Include Headers: Include the necessary C++ headers, such as <iostream>, <vector>, and <climits> for input-output, dynamic arrays, and integer limits, respectively.

Define Structures: Define two structures: Edge to represent a weighted edge in the graph, and Graph to represent the graph itself.

Declare Functions: Declare functions for error handling, creating the graph, printing the distance array, and executing the Bellman-Ford algorithm.

Error Handling Function: The errorHandle() function ensures that the user inputs a valid answer when prompted.

Graph Creation Function: The createGraph() function creates a graph with the specified number of vertices and edges.

Printing Function: The printArr() function prints the distances from the source vertex to all other vertices.

Bellman-Ford Algorithm: The bellmanFord() function implements the Bellman-Ford algorithm. It initializes the distance array with INT_MAX for all vertices except the source vertex, relaxes edges repeatedly to find the shortest paths, and detects negative weight cycles.

Main Function: The main() function serves as the entry point of the program. It creates a sample graph, calls the Bellman-Ford function, and prints the result.

Graph Initialization: Initialize the number of vertices (V) and edges (E) in the main function.

Edge Initialization: Add edges to the graph by assigning source, destination, and weight values to each edge.

Function Call: Finally, call the bellmanFord() function with the graph and the source vertex as arguments to find the shortest paths.


This step-by-step description outlines the process of the Bellman-Ford algorithm code, from initialization to the execution of the algorithm and printing of the results.



DEMO:

![image](https://github.com/arshasuresh03/Bellman-Ford-Algorithm/assets/160167081/27275ff2-3e4b-4e9e-9f03-d3d0282a30db)
