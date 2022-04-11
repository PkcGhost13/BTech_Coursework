DECLARE
    hours number (5);
    rate number (5);
    taxrate number (5,3):=0.28;
    gross number (5);
    net number (10,3);

BEGIN
    hours:=&hours;
    rate:=&rate;
    gross:=hours*rate;
    DBMS_OUTPUT.PUT_LINE('Gross Pay is : '||gross);
    net:=gross-gross*taxrate;
    DBMS_OUTPUT.PUT_LINE('Net Pay is : '||net);
END;
/