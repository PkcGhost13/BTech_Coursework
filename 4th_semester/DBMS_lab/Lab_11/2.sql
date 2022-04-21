CREATE OR REPLACE FUNCTION searchDept(dept_id NUMBER) 
RETURN BOOLEAN IS
    n NUMBER;
BEGIN
    Select count(1) into n
    from DEPT
    Where DEPTID = dept_id;
    IF n > 0 THEN
        RETURN TRUE;
    ELSE
        RETURN FALSE;
    END IF;
END searchDept;
/
DECLARE
    n number;
BEGIN
    n:=&n;
    IF SEARCHDEPT(n) then
        DBMS_OUTPUT.PUT_LINE('The Department id exists in table');
    ELSE
        DBMS_OUTPUT.PUT_LINE('The Department id does not exist in table');
    END IF;
END;
/