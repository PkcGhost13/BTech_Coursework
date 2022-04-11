DECLARE
    year number (4);

BEGIN
    year:=&year;
    IF MOD (year,4) = 0 and MOD (year,100) !=0 or MOD (year,400) = 0 THEN
        DBMS_OUTPUT.PUT_LINE(year||' is a leap year ');
    ELSE
        DBMS_OUTPUT.PUT_LINE(year||' is not a leap year ');
    END IF;
END;
/