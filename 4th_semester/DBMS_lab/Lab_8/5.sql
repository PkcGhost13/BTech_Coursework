DECLARE
    firstname varchar (20);
    lastname varchar (20);

BEGIN
    firstname:='&firstname';
    lastname:='&lastname';
    DBMS_OUTPUT.PUT_LINE(lastname||', '||firstname);
END;
/