DECLARE
    radius number (10,2);
    pi constant number (10,2):=3.14;
    area number (10,2);

BEGIN
    radius:=&radius;
    area:=pi * radius * radius;
    DBMS_OUTPUT.PUT_LINE('Area of given circle is : '||area);
END;
/