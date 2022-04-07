class Circle extends Shape 
{
    float r;
    void circlearea() 
    {
        area = (float) 3.14 * r * r;
        showArea();
    }
}