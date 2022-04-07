abstract class Shape
{
    private double radius;
    public void setValues(double radius)
    {
        this.radius = radius;
    }
    public double getRadius()
    {
        return radius;
    }
    public abstract double getArea();
}

class Circle extends Shape
{
    public double getArea()
    {
        return Math.PI * (getRadius() * getRadius());
    }
}

class Square extends Shape
{
    public double getArea()
    {
        return getRadius() * getRadius();
    }
}

class Triangle extends Shape 
{
    public double getArea()
    {
        return Math.sqrt(3)*0.25 * getRadius() * getRadius();
    }
}
public class Q1
{
    public static void main(String[] args)
    {
        Shape shape;
        Circle crcl = new Circle();
        shape = crcl;
        shape.setValues(50);
        System.out.println("Area of Circle   : " + shape.getArea());
        Square sq = new Square();
        shape = sq;
        shape.setValues(50);
        System.out.println("Area of Square   : " + shape.getArea());
        Triangle tri = new Triangle();
        shape=tri;
        shape.setValues(50);
        System.out.println("Area of Triangle : " + shape.getArea());
    }
}

