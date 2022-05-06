class NoTriangleFormException extends Exception {
    public NoTriangleFormException(String str) {
        super(str);
    }
}

public class Triangle {
    int a, b, c;
    Triangle() {
        a = b = c = 0;
    }
    Triangle(int a, int b, int c) throws NoTriangleFormException {
        if ((a + b < c) || (b + c < a) || (c + a < b)) {
            throw new NoTriangleFormException(
                    "Not a valid Triangle as one side is smaller than the sum of other two sides");
        }
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public double Find_perimeter() {
        double perimeter = a + b + c;
        return perimeter;
    }

    public double Find_area_90() {
        double s = (a + b + c) / 2;
        double area = Math.sqrt(s * (s - a) * (s - b) * (s - c));
        return area;
    }

    public static void main(String[] args) {
        Triangle triangle = new Triangle();
        try {
            triangle = new Triangle(3, 4, 5);
            System.out.println("Area of triangle : " + triangle.Find_area_90());
            System.out.println("Perimeter of triangle : " + triangle.Find_perimeter());
        } catch (NoTriangleFormException e) {
            System.out.println(e);
        }
    }
}
