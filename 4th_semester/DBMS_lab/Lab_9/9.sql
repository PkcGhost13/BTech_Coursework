/*
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
*/
DECLARE
    rentald DATE;
    returnd DATE;

BEGIN
    rentald := TO_DATE('&rentalDay-&rentalMonth-&rentalYear','dd-mm-yyyy');
    returnd := rentald + INTERVAL '3' DAY;
    INSERT INTO DVD 
    (
        rentaldate ,rentalmonth ,rentalyear,returndate,returnmonth,
        returnyear
    )
    VALUES
    (
        TO_CHAR(rentald,'DD'),TO_CHAR(rentald,'MM') ,TO_CHAR(rentald,'YYYY'),
        TO_CHAR(returnd,'DD'),TO_CHAR(returnd,'MM'),TO_CHAR(returnd,'YYYY')
    );
END;
/

SELECT * FROM DVD;
