public class equation
{
    float a,b,c;
    void setCoeff(float a,float b,float c)
    {
        this.a=a;
        this.b=b;
        this.c=c;
    }

    void findRoots()
    {
      float dis=b*b-4*a*c;
      if(dis<0)
      {
          System.out.println("No real roots");
          return;
      }
      float firstRoot=(float)(-b+Math.sqrt(dis))/2*a;
      float secondRoot=(float)(-b-Math.sqrt(dis))/2*a;
      System.out.println("The first root is : "+firstRoot);
      System.out.println("The second root is : "+secondRoot);
    }
}