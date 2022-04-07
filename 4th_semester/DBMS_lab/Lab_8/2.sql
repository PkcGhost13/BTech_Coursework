DECLARE
    n number (10,2);

begin
    n:=&n;
    DBMS_OUTPUT.PUT_LINE('Square of the number is : '||n*n);
    DBMS_OUTPUT.PUT_LINE('Cube of the number is : '||n*n*n);
    DBMS_OUTPUT.PUT_LINE('Square of the number is : '||2*n);
end;
/