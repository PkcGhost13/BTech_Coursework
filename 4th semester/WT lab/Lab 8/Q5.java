public class Q5
{
    public static void main(String[] args)
    {
        Shape shape;
        Circle crcl = new Circle();
        shape = crcl;
        shape.setValues(5);
        System.out.println("Area of Circle : " + shape.getArea());
        Square sq = new Square();
        shape = sq;
        shape.setValues(5);
        System.out.println("Area of Square : " + shape.getArea());
        Triangle tr = new Triangle();
        shape=tr;
        shape.setValues(5);
        System.out.println("Area of Triangle : " + shape.getArea());
    }
}

abstract class Shape
{
    private double Values;
    public void setValues(double Values)
    {
        this.Values = Values;
    }
    public double getValues()
    {
        return Values;
    }
    public abstract double getArea();
}

class Circle extends Shape
{
    public double getArea()
    {
        return Math.PI * (getValues() * getValues());
    }
}
class Square extends Shape
{
    public double getArea()
    {
        return getValues() * getValues();
    }
}
class Triangle extends Shape
{
    public double getArea()
    {
        double r=Math.sqrt(3);
        return r * getValues() * getValues() * 0.25;
    }
}