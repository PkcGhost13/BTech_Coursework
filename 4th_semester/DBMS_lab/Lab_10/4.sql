DECLARE
    CURSOR coursec (x in COURSE.COURSEID%TYPE )
    IS SELECT TITLE,CREDITS,PREREQ 
    from COURSE where COURSEID = x ;
    CIS555 EXCEPTION;
    cid COURSE.COURSEID%TYPE;
    ctitle COURSE.TITLE%TYPE;
    credit COURSE.CREDITS%TYPE;
    pre COURSE.PREREQ%TYPE;

BEGIN
    cid:=&cid;
    OPEN coursec (cid);
    FETCH coursec INTO ctitle,credit,pre;
    IF coursec%FOUND THEN
        DBMS_OUTPUT.PUT_LINE(CHR(10)||cid||'  '||ctitle||'  '
        ||credit||'  '||pre);
    ELSE
        RAISE CIS555;
    END IF;
    CLOSE coursec;
    EXCEPTION
    WHEN CIS555 THEN
        DBMS_OUTPUT.PUT_LINE('Course does not exist ');
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE(SQLCODE||' '||SQLERRM);
END;
/
