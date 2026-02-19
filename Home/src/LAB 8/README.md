 Filling the Pictures using Flood Fill Algorithm
# Overview

This project demonstrates how to fill enclosed graphical shapes using the Flood Fill algorithm in computer graphics. The algorithm colors all connected pixels inside a boundary starting from a selected interior point.

-> Objective

To understand and implement area filling techniques for closed shapes using recursive flood fill methods.

-> Algorithm: Flood Fill (4-Connected Approach)
Steps

Use recursion to implement the flood fill process.

Initialize all pixels with a common background color (e.g., black).

Choose a point inside the object to start filling.

Check the condition:

if(getpixel(x, y) == old_col)


Where:

old_col → background/common color

fill_col → new filling color

If the condition is true, perform the following recursive steps:

putpixel(x, y, fill_col);

flood(x+1, y, fill_col, old_col);  // right
flood(x-1, y, fill_col, old_col);  // left
flood(x, y+1, fill_col, old_col);  // down
flood(x, y-1, fill_col, old_col);  // up


This method is called the 4-connected flood fill because filling spreads in four directions: up, down, left, and right.
-> Features

Recursive area filling

Works for closed boundaries

Simple and easy to implement

Demonstrates pixel connectivity concepts

-> Conclusion

We successfully learned and implemented color filling algorithms, specifically the Flood Fill and Boundary Fill methods, and understood how recursion helps in filling enclosed regions in computer graphics.