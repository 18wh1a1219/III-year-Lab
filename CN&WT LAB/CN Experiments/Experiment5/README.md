# Experiment-5

## Aim :
Write a C program by taking an example subnet of hosts and obtain a broadcast tree for the subnet.

## Procedure :
A broadcast sends a message from a specified root processor to all other processors.
Step 1: Select any edge of minimal value that is not a loop.This is the first edge of T.   
Step 2: Select any remaining edge of G having minimal value that does not from a circuit with the edges already included in T.   
Step 3: Continue step2 until T contains n-1 edges where n is the number of vertices of G.

## Output :
Broadcast tree
![Output](Broadcast.png)
