/**
 * The Circle class models a circle with a radius and color.
 */
public class Circle {    // Save as "Circle.java"
   // The public constants
   public static final double DEFAULT_RADIUS = 1.0;
   public static final String DEFAULT_COLOR  = "red";
   
   // The private instance variables
   private double radius;
   private String color;
   
   // The (overloaded) constructors
   /** Constructs a Circle with default radius and color */
   public Circle() {                   // 1st (default) Constructor
      this.radius = DEFAULT_RADIUS;
      this.color  = DEFAULT_COLOR;
   }
   /** Constructs a Circle with the given radius and default color */
   public Circle(double radius) {      // 2nd Constructor
      this.radius = radius;
      this.color = DEFAULT_COLOR;
   }
   /** Constructs a Circle with the given radius and color */
   public Circle(double radius, String color) { // 3rd Constructor
      this.radius = radius;
      this.color = color;
   }
   
   /** Returns the radius - the public getter for private variable radius. */
   public double getRadius() {
      return this.radius;
   }
   /** Sets the radius - the public setter for private variable radius */
   public void setRadius(double radius) {
      this.radius = radius;
   }
   /** Returns the color - the public getter for private variable color */
   public String getColor() {
      return this.color;
   }
   /** Sets the color - the public setter for private variable color */
   public void setColor(String color) {
      this.color = color;
   }
 
   /** Returns a self-descriptive string for this Circle instance */
   public String toString() {
      return "Circle[radius=" + radius + ", color=" + color + "]";
   }
 
   /** Returns the area of this Circle */
   public double getArea() {
      return radius * radius * Math.PI;
   }
 
   /** Returns the circumference of this Circle */
   public double getCircumference() {
      return 2.0 * radius * Math.PI;
   }
}

/**
 * A Test Driver for the Circle class
 */
public class TestCircle {
   public static void main(String[] args) {
      // Test all constructors and toString()
      Circle c1 = new Circle(1.1, "blue");
      System.out.println(c1);  // implicitly run toString()
      //Circle[radius=1.1, color=blue]
      Circle c2 = new Circle(2.2);
      System.out.println(c2);
      //Circle[radius=2.2, color=red]
      Circle c3 = new Circle();
      System.out.println(c3);
      //Circle[radius=1.0, color=red]

      // Test Setters and Getters
      c1.setRadius(3.3);
      c1.setColor("green");
      System.out.println(c1);  // use toString() to inspect the modified instance
      //Circle[radius=3.3, color=green]
      System.out.println("The radius is: " + c1.getRadius());
      //The radius is: 3.3
      System.out.println("The color is: " + c1.getColor());
      //The color is: green

      // Test getArea() and getCircumference()
      System.out.printf("The area is: %.2f%n", c1.getArea());
      //The area is: 34.21
      System.out.printf("The circumference is: %.2f%n", c1.getCircumference());
      //The circumference is: 20.73
   }
}
