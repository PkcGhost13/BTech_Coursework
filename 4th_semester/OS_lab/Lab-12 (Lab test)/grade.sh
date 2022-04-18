#WAP in shell script (use case statement) find the grade of a student.
echo "Enter the total marks of student : "
read n
echo "The grade of the student is : "
case $n in
    100) echo "O grade" ;;
    9[0-9]) echo "O (Outstanding) grade" ;; 
    8[0-9]) echo "E (Excellent) grade" ;;
    7[0-9]) echo "A grade" ;;
    6[0-9]) echo "B grade" ;;
    5[0-9]) echo "C grade" ;;
    4[0-9]) echo "D grade" ;;
    *) echo "F (Fail)" ;;
esac


