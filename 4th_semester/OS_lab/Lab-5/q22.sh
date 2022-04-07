echo "Write the total marks"
read totalMarks

case $totalMarks in
[9][0-9]) echo "Your grade is O"
;;
[8][0-9]) echo "Your grade is E"
;;
[7][0-9]) echo "Your grade is A"
;;
[6][0-9]) echo "Your grade is B"
;;
[5][0-9]) echo "Your grade is C"
;;
[4][0-9]) echo "Your grade is D"
;;
*) echo "You have failed grade is F"
esac
