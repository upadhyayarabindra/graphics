

# **Title: Midpoint Ellipse Drawing Algorithm**

## **Objective**

To generate an ellipse on the graphics screen using the Midpoint Ellipse Algorithm by calculating pixel positions efficiently with incremental decision parameters.

---

## **Algorithm**

1. Read the values of horizontal radius (r_x), vertical radius (r_y), and the center of the ellipse ((x_c, y_c)).

2. Consider the ellipse centered at the origin first and compute the starting point:
   [
   (x_0, y_0) = (0, r_y)
   ]

3. **Region 1 (slope < 1):**

   * Initialize the first decision parameter:
     [
     p_1 = r_y^2 - r_x^2 r_y + \frac{1}{4} r_x^2
     ]
   * While
     [
     2 r_y^2 x < 2 r_x^2 y
     ]
     repeat:

     * Plot the current point and its symmetric points.
     * If (p_1 < 0):
       [
       x = x + 1
       ]
       [
       p_1 = p_1 + 2 r_y^2 x + r_y^2
       ]
     * Otherwise:
       [
       x = x + 1,\quad y = y - 1
       ]
       [
       p_1 = p_1 + 2 r_y^2 x - 2 r_x^2 y + r_y^2
       ]

4. **Region 2 (slope ≥ 1):**

   * Calculate the new decision parameter:
     [
     p_2 = r_y^2(x + \tfrac{1}{2})^2 + r_x^2(y - 1)^2 - r_x^2 r_y^2
     ]
   * Continue while (y \ge 0):

     * Plot the current point and its symmetric points.
     * If (p_2 > 0):
       [
       y = y - 1
       ]
       [
       p_2 = p_2 - 2 r_x^2 y + r_x^2
       ]
     * Otherwise:
       [
       x = x + 1,\quad y = y - 1
       ]
       [
       p_2 = p_2 + 2 r_y^2 x - 2 r_x^2 y + r_x^2
       ]

5. For every calculated point ((x, y)), determine the symmetric points in all four quadrants:
   [
   (\pm x, \pm y)
   ]

6. Shift the points to the required center:
   [
   x = x + x_c,\quad y = y + y_c
   ]
   and plot them on the screen.

---

## **Result**

The program displays a smooth ellipse centered at the specified coordinates ((x_c, y_c)) with radii (r_x) and (r_y).
Pixels are plotted gradually, allowing the drawing process to be observed step by step.
Because the algorithm uses symmetry and incremental calculations, the ellipse appears balanced and accurate.

---

## **Conclusion**

The Midpoint Ellipse Algorithm efficiently draws an ellipse using only integer operations, avoiding complex floating-point calculations.
By dividing the ellipse into two regions and using symmetry, the number of computations is reduced significantly.
This method is simple, fast, and well-suited for raster graphics programming.
It helps students understand how curved shapes are generated using pixel-based techniques in computer graphics.

