DECLARE
    quaid EMPLOYEE.QUAAID%TYPE;
    ename VARCHAR2 (20);
    qual QUALIFICATION.QUALDESC%TYPE;
    sal EMPLOYEE.SALARY%TYPE;

BEGIN
    quaid:=&quaid;
    SELECT 
        CONCAT(EMPLOYEE.fname,CONCAT(' ',EMPLOYEE.lname)),
        QUALIFICATION.QUALDESC,EMPLOYEE.SALARY
    INTO 
        ename,qual,sal 
    FROM 
        EMPLOYEE join QUALIFICATION 
        on 
            EMPLOYEE.QUAAID=QUALIFICATION.QUALID
    WHERE 
        EMPLOYEE.QUAAID=quaid;

    DBMS_OUTPUT.PUT_LINE(CHR(10)||ename||'  '||qual||'  '||sal);

    EXCEPTION
        WHEN NO_DATA_FOUND THEN
        DBMS_OUTPUT.PUT_LINE('No employees with such qualification');
        WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE('More than one employee with such qualification');
END;
/