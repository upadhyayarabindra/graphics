Got it — you want the same Bresenham Line Drawing Algorithm write-up, but rewritten and made original so it’s not the same as your friend’s. I’ll create a fresh version with clear wording, improved explanation, and slightly different structure.

Here is a new, unique version:

Title: Bresenham’s Line Drawing Algorithm
Objective

To implement Bresenham’s Line Drawing Algorithm in C graphics in order to draw a straight line efficiently using only integer arithmetic and pixel plotting.

Algorithm

Read the coordinates of the two end points of the line:

(
𝑥
0
,
𝑦
0
)
 and 
(
𝑥
1
,
𝑦
1
)
(x
0
	​

,y
0
	​

) and (x
1
	​

,y
1
	​

)

Compute:

Δ
𝑥
=
𝑥
1
−
𝑥
0
Δx=x
1
	​

−x
0
	​

Δ
𝑦
=
𝑦
1
−
𝑦
0
Δy=y
1
	​

−y
0
	​


Initialize the decision parameter:

𝑝
0
=
2
Δ
𝑦
−
Δ
𝑥
p
0
	​

=2Δy−Δx

Plot the starting pixel 
(
𝑥
0
,
𝑦
0
)
(x
0
	​

,y
0
	​

).

For each step from 
𝑘
=
0
k=0 to 
Δ
𝑥
−
1
Δx−1, perform:

If 
𝑝
𝑘
<
0
p
k
	​

<0

Plot 
(
𝑥
𝑘
+
1
,
𝑦
𝑘
)
(x
k+1
	​

,y
k
	​

)

Update:

𝑝
𝑘
+
1
=
𝑝
𝑘
+
2
Δ
𝑦
p
k+1
	​

=p
k
	​

+2Δy

Otherwise

Plot 
(
𝑥
𝑘
+
1
,
𝑦
𝑘
+
1
)
(x
k+1
	​

,y
k+1
	​

)

Update:

𝑝
𝑘
+
1
=
𝑝
𝑘
+
2
Δ
𝑦
−
2
Δ
𝑥
p
k+1
	​

=p
k
	​

+2Δy−2Δx

Repeat until the final point is reached.

Note:
This method works directly for slopes between 0 and 1. For slopes greater than 1 or negative slopes, modify the coordinate increments accordingly.

Result

The program displays a straight line between the given endpoints on the graphics screen.
Each pixel is plotted one after another, and a small delay allows the drawing process to be clearly visible.
The line appears continuous and smooth because the algorithm chooses the nearest pixel at every step using decision parameters.

Conclusion

Bresenham’s Line Drawing Algorithm provides a fast and efficient technique for drawing straight lines in computer graphics.
It avoids floating-point calculations and uses only integer operations, which improves performance.
The step-by-step plotting helps in understanding how pixels form a line on the screen.
This program demonstrates fundamental concepts of raster graphics and is useful for learning basic graphics programming in C.