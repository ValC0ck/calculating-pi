# calculating-pi
calculating pi literally

The task:
Calculate pi with accurately eps = 10^-6.

We know the equation of the circle: x^2 + y^2 = r^2 -> y^2 = r^2 - x^2 -> y = sqrt(r^2 - x^2).
Let's consider the radius of the circle to be 1, then the area of the circle will be equal to the number of pi.

Thus, if we calculate the integral: ![image](https://github.com/user-attachments/assets/08ac2c87-ed50-4046-955a-efae2665ce6e), then we get the area of the semicircle, which is pi/2. Multiply the value by 2 and we get the number pi.

The problem is solved by the method of rectangles. N is the number of rectangles. dx - width of each rectangle. We set dx manually (this was the task). We calculate N by the formula: ![image](https://github.com/user-attachments/assets/e44e78cf-94d6-43e8-a1ec-4659e820cb0a).

P.S. Yes, I know it's weird to set the precision and then check the input value for it, but that was our assignment. :)
