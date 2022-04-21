DECLARE
    invalid_operator EXCEPTION;
    fnumber NUMBER := &fnumber;
    snumber NUMBER := &snumber;
    op CHAR := '&op';
    res NUMBER;

BEGIN
    IF op = '+' THEN
        res := fnumber + snumber;
    ELSIF op = '-' THEN
        res := fnumber - snumber;
    ELSIF op = '*' THEN
        res := fnumber * snumber;
    ELSIF op = '/' THEN
        res := fnumber / snumber;
    ELSE
        RAISE invalid_operator;
    END IF;
    DBMS_OUTPUT.PUT_LINE ('The solution is : '||fnumber || op || snumber || '=' || res);
    EXCEPTION
    WHEN invalid_operator THEN
    DBMS_OUTPUT.PUT_LINE('Invalid operator entered');
    WHEN ZERO_DIVIDE THEN
    DBMS_OUTPUT.PUT_LINE(SQLCODE||' '||SQLERRM); 
END;
/