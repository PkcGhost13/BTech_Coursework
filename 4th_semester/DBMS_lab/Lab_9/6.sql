DECLARE
    month number(2);
    year number(4);
    TYPE days IS VARRAY(12) OF INTEGER;
    d days;
    
BEGIN
    month:=&month;
    year:=&year;
    d:=days(31,28,31,30,31,30,31,31,30,31,30,31);
    IF MOD (year,4) = 0 and MOD (year,100) !=0 or MOD (year,400) = 0 and month = 2 THEN
        DBMS_OUTPUT.PUT_LINE('The number of days is : '||29);
    ELSE
        DBMS_OUTPUT.PUT_LINE('The number of days is : '||d(month));
    END IF;
END;
/