CREATE OR REPLACE PACKAGE csroom AS
    FUNCTION maxseats(cs_id NUMBER) RETURN NUMBER;
    PROCEDURE room_exists(rn NUMBER);
END csroom;
/
CREATE OR REPLACE PACKAGE BODY csroom AS

    FUNCTION maxseats(cs_id NUMBER) 
    RETURN NUMBER IS
        m NUMBER;
    BEGIN
        SELECT MAXCOUNT 
        INTO m
        FROM CRSSECTION
        WHERE CSID=cs_id;
        RETURN m;
    END maxseats;

    PROCEDURE room_exists(rn NUMBER) IS
    build VARCHAR2(20);
    capac number;
    BEGIN
        SELECT BUILDING,CAPACITY
        INTO build,capac
        FROM LOCATION
        WHERE ROOMNO=rn;
        DBMS_OUTPUT.PUT_LINE('Building : '||build||CHR(10)||
        'Room capacity : '||capac);
        EXCEPTION
        WHEN NO_DATA_FOUND THEN
            DBMS_OUTPUT.PUT_LINE('No such room exists');
    END room_exists;

END csroom;
/
DECLARE
    m number;
    rm NUMBER;
    cs_id NUMBER;
BEGIN
    cs_id:=&csid;
    rm:=&room_no;
    m:=csroom.maxseats(cs_id);
    DBMS_OUTPUT.PUT_LINE('Max capacity : '||m);
    csroom.room_exists(rm);
END;
/