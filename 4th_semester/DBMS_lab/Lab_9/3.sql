DECLARE
    n number (2):=1;

BEGIN
    FOR n IN REVERSE 1..10
    LOOP
        DBMS_OUTPUT.PUT_LINE (n);  
    END LOOP;  
END;
/