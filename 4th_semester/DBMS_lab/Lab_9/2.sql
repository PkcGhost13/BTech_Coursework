DECLARE
    n number (2):=1;

BEGIN
    LOOP
        IF MOD(n,2)!=0 THEN
            DBMS_OUTPUT.PUT_LINE(n);
            n:=n+1;
        ELSE
            n:=n+1;
        END IF;
        IF n>=10 THEN EXIT;
        END IF;
    END LOOP;
END;
/