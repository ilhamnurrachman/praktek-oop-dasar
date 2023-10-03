/**
 * The Circle class models a circle with a radius and color.
 */
public class Circle {    // Save as "Circle.java"
   // Private instance variables
   private double radius;
   private String color;

   // Constructors (overloaded)
   /** Constructs a Circle instance with default radius and color */
   public Circle() {                   // 1st Constructor (default constructor)
      radius = 1.0;
      color = "red";
   }
   /** Constructs a Circle instance with the given radius and default color*/
   public Circle(double r) {           // 2nd Constructor
      radius = r;
      color = "red";
   }
   /** Constructs a Circle instance with the given radius and color */
   public Circle(double r, String c) { // 3rd Constructor
      radius = r;
      color = c;
   }

   // Public methods
   /** Returns the radius */
   public double getRadius() {  // getter for radius
      return radius;
   }
   /** Returns the color */
   public String getColor() {   // getter for color
      return color;
   }
   /** Returns the area of this circle */
   public double getArea() {
      return radius * radius * Math.PI;
   }
}

/**
 * A Test Driver for the "Circle" class
 */
public class TestCircle {    // Save as "TestCircle.java"
   public static void main(String[] args) {   // Program entry point
      // Declare and Construct an instance of the Circle class called c1
      Circle c1 = new Circle(2.0, "blue");  // Use 3rd constructor
      System.out.println("The radius is: " + c1.getRadius());  // use dot operator to invoke member methods
      //The radius is: 2.0
      System.out.println("The color is: " + c1.getColor());
      //The color is: blue
      System.out.printf("The area is: %.2f%n", c1.getArea());
      //The area is: 12.57

      // Declare and Construct another instance of the Circle class called c2
      Circle c2 = new Circle(2.0);  // Use 2nd constructor
      System.out.println("The radius is: " + c2.getRadius());
      //The radius is: 2.0
      System.out.println("The color is: " + c2.getColor());
      //The color is: red
      System.out.printf("The area is: %.2f%n", c2.getArea());
      //The area is: 12.57

      // Declare and Construct yet another instance of the Circle class called c3
      Circle c3 = new Circle();  // Use 1st constructor
      System.out.println("The radius is: " + c3.getRadius());
      //The radius is: 1.0
      System.out.println("The color is: " + c3.getColor());
      //The color is: red
      System.out.printf("The area is: %.2f%n", c3.getArea());
      //The area is: 3.14
   }
}
