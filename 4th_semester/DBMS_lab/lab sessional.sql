SQL> create table employees(
  2      employee_id int primary key,
  3      name varchar2(20),
  4      months int,
  5      salary int);

Table created.

SQL> INSERT INTO employees VALUES('12228','Rose','15','1968');

1 row created.

SQL> INSERT INTO employees VALUES('33645','Angela','1','3443');

1 row created.

SQL> INSERT INTO employees VALUES('45692','Frank','17','1608');

1 row created.

SQL> INSERT INTO employees VALUES('56118','Patrick','7','1345');

1 row created.

SQL> INSERT INTO employees VALUES('59725','Lisa','11','2330');

1 row created.

SQL> INSERT INTO employees VALUES('74197','Kimberly','16','4372');

1 row created.

SQL> INSERT INTO employees VALUES('78454','Bonnie','8','1771');

1 row created.

SQL> INSERT INTO employees VALUES('83565','Michael','6','2017');

1 row created.

SQL> INSERT INTO employees VALUES('98607','Todd','5','3396');

1 row created.

SQL> INSERT INTO employees VALUES('99989','Joe','9','3573');

1 row created.

SQL> select * from employees;

EMPLOYEE_ID NAME                     MONTHS     SALARY
----------- -------------------- ---------- ----------
      12228 Rose                         15       1968
      33645 Angela                        1       3443
      45692 Frank                        17       1608
      56118 Patrick                       7       1345
      59725 Lisa                         11       2330
      74197 Kimberly                     16       4372
      78454 Bonnie                        8       1771
      83565 Michael                       6       2017
      98607 Todd                          5       3396
      99989 Joe                           9       3573

10 rows selected.

SQL> select name from employees where salary > 2000 and months < 10 order by employee_id;

NAME
--------------------
Angela
Michael
Todd
Joe


SQL> create table students(
  2  id int primary key,
  3  name varchar(20));

Table created.

SQL> INSERT INTO STUDENTS VALUES(1,'Ashley');

1 row created.

SQL> INSERT INTO STUDENTS VALUES(2,'Samantha');

1 row created.

SQL> INSERT INTO STUDENTS VALUES(3,'Julia');

1 row created.

SQL> INSERT INTO STUDENTS VALUES(4,'Scarlet');

1 row created.

SQL> select * from students;

        ID NAME
---------- --------------------
         1 Ashley
         2 Samantha
         3 Julia
         4 Scarlet

SQL> set autocommit on;
SQL> commit;

Commit complete.

SQL> create table friends(
  2    id int primary key,
  3    friend_id int);

Table created.

SQL> INSERT INTO friends VALUES(1,2);

1 row created.

Commit complete.
SQL> INSERT INTO friends VALUES(2,3);

1 row created.

Commit complete.
SQL> INSERT INTO friends VALUES(3,4);

1 row created.

Commit complete.
SQL> INSERT INTO friends VALUES(4,1);

1 row created.

Commit complete.
SQL> select * from friends;

        ID  FRIEND_ID
---------- ----------
         1          2
         2          3
         3          4
         4          1

SQL> create table packages(
  2  id int primary key,
  3  salary float);

Table created.

SQL> insert into packages values(1,15.20);

1 row created.

Commit complete.
SQL> insert into packages values(2,10.06);

1 row created.

Commit complete.
SQL> insert into packages values(3,11.55);

1 row created.

Commit complete.
SQL> insert into packages values(4,12.12);

1 row created.

Commit complete.
SQL> select * from packages
  2  ;

        ID     SALARY
---------- ----------
         1       15.2
         2      10.06
         3      11.55
         4      12.12

SQL> SELECT tb.Name
  2  FROM (
  3  SELECT st1.ID, st1.Name, pkg1.Salary, f.Friend_ID, st2.name as friend_name,
  4  pkg2.Salary as friend_salary
  5  FROM Students st1
  6  JOIN Packages pkg1 ON st1.ID = pkg1.ID
  7  JOIN Friends f ON st1.ID = f.ID
  8  JOIN Students st2 ON f.Friend_ID = st2.ID
  9  JOIN Packages pkg2 ON f.Friend_ID = pkg2.ID
 10  ) tb
 11  WHERE tb.friend_salary > tb.Salary
 12  ORDER BY friend_salary;

NAME
--------------------
Samantha
Julia
Scarlet


















SQL> select name from students s, friends f, packages p1, 
packages p2 where s.id = f.id and s.id = p1.id and f.friend_id = p2.id 
and p1.salary < p2.salary order by p2.salary;

NAME
--------------------
Samantha
Julia
Scarlet

SQL>