set SERVEROUTPUT on;
DECLARE
    n number(1);
BEGIN
    n := 10;
    IF (MOD(n, 2) = 0) THEN
        DBMS_OUTPUT.PUT_LINE('even');
    ELSE
        DBMS_OUTPUT.PUT_LINE('odd');
    END IF;
END;
/
