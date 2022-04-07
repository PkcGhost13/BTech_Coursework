DECLARE
    a number (5):=10;
    b number (5):=20;
    temp number (5);
begin
    DBMS_OUTPUT.PUT_LINE('The values before swapping are : ');
    DBMS_OUTPUT.PUT_LINE('a : '||a);
    DBMS_OUTPUT.PUT_LINE('b : '||b);
    temp:=a;
    a:=b;
    b:=temp;
    DBMS_OUTPUT.PUT_LINE('The values after swapping are : ');
    DBMS_OUTPUT.PUT_LINE('a : '||a);
    DBMS_OUTPUT.PUT_LINE('b : '||b);
end;
/