create table COURSE
(
    COURSEID NUMBER generated as identity,
    TITLE    VARCHAR2(10),
    CREDITS  VARCHAR2(10),
    PREREQ   VARCHAR2(20)
)

create table CRSSECTION
(
    CSID      NUMBER generated as identity,
    COURSEID  NUMBER
        unique,
    SECTION   VARCHAR2(5),
    TERMID    NUMBER,
    FACULTYID NUMBER,
    DAY       VARCHAR2(10),
    STARTTIME VARCHAR2(10),
    ENDTIME   NUMBER,
    ROOMID    NUMBER,
    MAXCOUNT  NUMBER
        check (MaxCount <= 10)
)

create table DEPARTMENT
(
    DEPTID    NUMBER generated as identity,
    DEPTNAME  VARCHAR2(10),
    FACULTYID NUMBER
)

create table DEPENDENT
(
    EMPLOYEEID  NUMBER generated as identity,
    DEPENDENTID NUMBER,
    DEPDOB      DATE,
    RELATION    VARCHAR2(20)
)

create table DEPT
(
    DEPTID     NUMBER generated as identity,
    DEPTNAME   VARCHAR2(10),
    LOCATION   VARCHAR2(10),
    EMPLOYEEID NUMBER
)

create table EMP30
(
    EMPLOYEEID NUMBER not null,
    LNAME      VARCHAR2(10),
    FNAME      VARCHAR2(10),
    HIREDATE   DATE,
    SALARY     NUMBER
)

create table EMPLEVEL
(
    LEVELNO    NUMBER generated as identity,
    LOWSALARY  NUMBER,
    HIGHSALARY NUMBER
)

create table EMPLOYEE
(
    EMPLOYEEID NUMBER generated as identity,
    LNAME      VARCHAR2(10),
    FNAME      VARCHAR2(10),
    POSITIONID NUMBER,
    SUPERVISOR VARCHAR2(20),
    HIREDATE   DATE,
    SALARY     NUMBER,
    COMMISSION NUMBER,
    DEPTID     NUMBER,
    QUAAID     NUMBER
)

create table FACULTY
(
    FACULTYID NUMBER generated as identity,
    NAME      VARCHAR2(12),
    ROOMID    NUMBER,
    PHONE     NUMBER,
    DEPTID    NUMBER
)

create table ITEM
(
    ITEMNUM NUMBER not null
)

create table LOCATION
(
    ROOMID   NUMBER generated as identity,
    BUILDING VARCHAR2(20),
    ROOMNO   NUMBER not null,
    CAPACITY NUMBER not null,
    ROOMTYPE VARCHAR2(10)
)

create table MAJOR
(
    MAJORID   NUMBER generated as identity,
    MAJORDESC VARCHAR2(20)
)

create table POSITION
(
    POSITIONID   NUMBER generated as identity,
    POSITIONDESC VARCHAR2(30)
)

create table QUALIFICATION
(
    QUALID   NUMBER generated as identity,
    QUALDESC VARCHAR2(30)
)

create table REGISTRATION
(
    STUDENTID NUMBER generated as identity,
    CSID      NUMBER not null,
    MIDTERM   VARCHAR2(20),
    FINAL     VARCHAR2(20),
    REGSTATUS VARCHAR2(20)
)


create table ROOM
(
    ROOMTYPE NUMBER generated as identity,
    ROOMDESC VARCHAR2(10)
)

create table ROOMS
(
    ROOMTYPE VARCHAR2(30),
    ROOMDESC VARCHAR2(50)
)

create table S6006SECT
(
    COURSEID  NUMBER,
    SECTION   VARCHAR2(5),
    FACULTYID NUMBER,
    ROOMID    NUMBER
)

create table STUDENT
(
    STUDENTID NUMBER generated as identity,
    LAST      VARCHAR2(10),
    FIRST     VARCHAR2(10),
    STREET    VARCHAR2(10),
    CITY      VARCHAR2(10),
    STATE     VARCHAR2(10),
    ZIP       NUMBER,
    STARTTERM NUMBER,
    BIRTHDATE DATE,
    FACULTYID NUMBER,
    MAJORID   NUMBER,
    PHONE     NUMBER
)

create table TERM
(
    TERMID    NUMBER generated as identity,
    TERMDESC  VARCHAR2(10),
    STARTDATE DATE,
    ENDDATE   DATE
)

/




