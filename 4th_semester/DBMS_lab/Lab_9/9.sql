DROP TABLE DVD; 
CREATE TABLE DVD
(
    rentaldate number(2),
    rentalmonth number(2),
    rentalyear number(4),
    returndate number(2),
    returnmonth number(2),
    returnyear number(4)
); 

DECLARE
    rentaldate number(2);
    rentalmonth number(2);
    rentalyear number(4);
    returndate number(2);
    returnmonth number(2);
    returnyear number(4);
    TYPE days IS VARRAY(12) OF INTEGER;
    d days;

BEGIN
    rentaldate:=&rentaldate;
    rentalmonth:=&rentalmonth;
    rentalyear:=&rentalyear;
    d:=days(31,28,31,30,31,30,31,31,30,31,30,31);
    IF MOD (rentalyear,4) = 0 and MOD (rentalyear,100) !=0 or MOD (rentalyear,400) = 0 THEN
        d(2):=29;
    END IF;
    returndate:=rentaldate+3;
    IF returndate>d(rentalmonth) THEN
        IF rentalmonth=12 THEN
            returnyear:=rentalyear+1;
            returnmonth:=1;
            returndate:=returndate-31;
        ELSE
            returndate:=returndate-d(rentalmonth);
            returnmonth:=rentalmonth+1;
            returnyear:=rentalyear;
        END IF;
    ELSE
        returnmonth:=rentalmonth;
        returnyear:=rentalyear;
    END IF;

    INSERT INTO DVD 
    (
        rentaldate ,
        rentalmonth ,
        rentalyear,
        returndate,
        returnmonth,
        returnyear
    )
    VALUES
    (
       rentaldate ,
        rentalmonth ,
        rentalyear,
        returndate,
        returnmonth,
        returnyear
    );
END;
/

SELECT * FROM DVD;

