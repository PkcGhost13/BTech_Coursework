DECLARE
    n number (2):=1;

BEGIN
    LOOP
        IF MOD(n,2)!=0 THEN
            DBMS_OUTPUT.PUT_LINE(n);
        END IF;
        n:=n+1;
        IF n>=10 THEN EXIT;
        END IF;
    END LOOP;
END;
/