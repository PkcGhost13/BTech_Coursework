CREATE OR REPLACE PROCEDURE get_student
    (id IN NUMBER,
    ln OUT VARCHAR2,
    fn OUT VARCHAR2,
    ph OUT NUMBER)
    IS
BEGIN
    SELECT Last, First, Phone
        INTO ln, fn, ph
    FROM student
        WHERE StudentId = id;
    EXCEPTION
    WHEN OTHERS THEN
    DBMS_OUTPUT.PUT_LINE('StudentId ' ||
       TO_CHAR(id) || ' does not exist');
END get_student;
/

DECLARE
    id student.StudentId%TYPE := '&Student_Id';
    ln student.last%TYPE;
    fn student.first%TYPE;
    ph student.Phone%TYPE;
BEGIN
    get_student(id,ln,fn,ph);
    IF ln IS NOT NULL THEN
        DBMS_OUTPUT.PUT_LINE('Name:  '||fn||' '||ln);
        DBMS_OUTPUT.PUT_LINE('Phone: ' ||ph);
    END IF;
END;
/   