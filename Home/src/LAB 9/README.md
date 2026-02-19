Line Clipping using Cohen–Sutherland Algorithm
-> Overview

This project demonstrates line clipping, a fundamental technique in computer graphics used to display only the visible portion of a line inside a specified clipping window.

The Cohen–Sutherland line clipping algorithm efficiently determines whether a line is completely visible, completely invisible, or partially visible using region codes.

-> Objective

To implement the Cohen–Sutherland algorithm and understand how lines are clipped within a rectangular window.

-> Algorithm Steps
Step 1: Input Line

Read the two endpoints of the line:

P1(x1, y1), P2(x2, y2)

Step 2: Input Clipping Window

Read the rectangular clipping window coordinates:

Top-left     → (wx1, wy1)
Bottom-right → (wx2, wy2)

Step 3: Assign Region Codes

Each endpoint is assigned a 4-bit region code.

Initialize code = 0000

Set bits as follows:

Condition	Bit Set
x < wx1	Left
x > wx2	Right
y < wy2	Bottom
y > wy1	Top
Step 4: Check Line Visibility
Case A — Completely Visible

If both region codes = 0000
→ Draw the line directly.

Case B — Completely Invisible

If logical AND of region codes ≠ 0000
→ Discard the line.

Case C — Partially Visible

Otherwise
→ Line must be clipped.

Step 5: Find Intersection Points

If both endpoints are outside → find both intersections

If one endpoint is outside → find one intersection

Calculate intersections with clipping boundaries.

Step 6: Clip the Line

Replace outside points with intersection points.

Step 7: Draw Result

Draw the visible (clipped) portion of the line.

-> Features

Efficient visibility testing

Uses binary region codes

Reduces unnecessary drawing

Improves rendering performance

-> Conclusion

We successfully learned how to clip lines using the Cohen–Sutherland line clipping algorithm, and understood how region codes help determine whether a line is visible, invisible, or partially visible within a clipping window.