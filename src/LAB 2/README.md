Title: Bresenham Line Drawing Algorithm
Algorithm:

Input the two line end-points, storing the left end-point in (x₀, y₀).

Plot the point (x₀, y₀).

Calculate the constants Δx, Δy, 2Δy, and (2Δy − 2Δx) and get the first value for the decision parameter as:

p₀ = 2Δy − Δx

At each xₖ along the line, starting at k = 0, perform the following test:

If pₖ < 0, the next point to plot is (xₖ₊₁, yₖ) and

pₖ₊₁ = pₖ + 2Δy

Otherwise, the next point to plot is (xₖ₊₁, yₖ₊₁) and

pₖ₊₁ = pₖ + 2Δy − 2Δx

Repeat step 4 (Δx − 1) times.

Note: The algorithm above assumes slope < 1. For slopes > 1, interchange the roles of x and y.

Result:

A straight green line appears on the screen between the specified end points (x₀, y₀) and (x₁, y₁).
Each pixel is plotted step-by-step using a small delay, so the line drawing process can be observed clearly.
The line appears continuous and smooth because Bresenham’s algorithm uses integer calculations for accurate raster plotting.

The following text is displayed on the screen:

Rabindra upadhyaya
240355

Conclusion:

The program successfully demonstrates the Bresenham Line Drawing Algorithm using C graphics.
It efficiently draws a straight line using only integer arithmetic, reducing computation time.
Step-by-step plotting with delay helps in visual understanding of how pixels are selected.
This program is a good example of basic computer graphics concepts and shows how lines can be drawn without using built-in line() functions