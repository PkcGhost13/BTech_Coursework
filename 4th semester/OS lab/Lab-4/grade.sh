echo "Enter the total marks of student"
read n
echo "The grade of the student is : "
case $n in
    100) echo "O" ;;
    9[0-9]) echo "O" ;; 
    8[0-9]) echo "E" ;;
    7[0-9]) echo "A" ;;
    6[0-9]) echo "B" ;;
    5[0-9]) echo "C" ;;
    4[0-9]) echo "D" ;;
    *) echo "F" ;;
esac

