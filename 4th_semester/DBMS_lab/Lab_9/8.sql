SELECT * from EMPLOYEE;
DECLARE
    eid EMPLOYEE.EMPLOYEEID%TYPE;
    ename VARCHAR(30);
    qual QUALIFICATION.QUALDESC%TYPE;
    sal EMPLOYEE.SALARY%TYPE;
    comm EMPLOYEE.COMMISSION%type;

BEGIN
    eid:=&eid;
    SELECT 
        CONCAT(fname,CONCAT(' ',lname)),
        QUALIFICATION.QUALDESC,SALARY,COMMISSION 
    INTO 
        ename,qual,sal,comm 
    FROM
        EMPLOYEE JOIN QUALIFICATION
        ON 
            (EMPLOYEE.QUAAID=QUALIFICATION.QUALID)
    where EMPLOYEEID=eid;
    DBMS_OUTPUT.PUT_LINE('Name of employee          : '||ename);
    DBMS_OUTPUT.PUT_LINE('Qualification of employee : '||qual);
    DBMS_OUTPUT.PUT_LINE('Salary sum of employee    : '||(sal+comm));
END;
/