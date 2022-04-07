class Rational 
{
    int p;
    int q;
    Rational(int p, int q) 
    {
        this.p = p;
        this.q = q;
    }
    Rational add(Rational r) 
    {
        int denominator = r.q * q;
        int numerator = q * r.p + p * r.q;
        Rational result = new Rational(numerator, denominator);
        return result;
    }

    Rational subtract(Rational r) 
    {
        int denominator = r.q * q;
        int numerator = q * r.p - p * r.q;
        Rational result = new Rational(numerator, denominator);
        return result;
    }

    Rational multiply(Rational r) 
    {
        int numerator = p * r.p;
        int denominator = q * r.q;
        Rational result = new Rational(numerator, denominator);
        return result;
    }

    Rational divide(Rational r) 
    {
        int denominator = p * r.q;
        int numerator = q * r.p;
        Rational result = new Rational(numerator, denominator);
        return result;
    }
}