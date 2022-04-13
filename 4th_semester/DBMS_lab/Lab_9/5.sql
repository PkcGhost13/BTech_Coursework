DECLARE
    n number(2):=0;
    var number(5):=1;

BEGIN
    n:=&n;
    DBMS_OUTPUT.PUT_LINE('The multiplication table of '||n||' is :');
    WHILE var<=10
    LOOP
        DBMS_OUTPUT.PUT_LINE( n ||' * '|| var ||' = '||n*var);
        var:=var+1;
    END LOOP;
END;
/

commit
