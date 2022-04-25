DECLARE
    invalid_operator EXCEPTION;
    fn NUMBER := &first_number;
    op CHAR := '&op';
    sn NUMBER := &second_number;
    res NUMBER;

BEGIN
    IF op = '+' THEN
        res := fn + sn;
    ELSIF op = '-' THEN
        res := fn - sn;
    ELSIF op = '*' THEN
        res := fn * sn;
    ELSIF op = '/' THEN
        res := fn / sn;
    ELSE
        RAISE invalid_operator;
    END IF;
    DBMS_OUTPUT.PUT_LINE ('The solution is : '||fn || op || sn || ' = ' || res);
    EXCEPTION
    WHEN invalid_operator THEN
    DBMS_OUTPUT.PUT_LINE('Invalid operator entered');
    WHEN ZERO_DIVIDE THEN
    DBMS_OUTPUT.PUT_LINE(SQLCODE||' '||SQLERRM); 
END;
/