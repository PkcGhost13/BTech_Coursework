echo "Enter the year :"
read year 

c1=`expr $year % 400`
c2=`expr $year % 100`
c3=`expr $year % 4`

if [ $c1 -eq 0 ]
then 
echo "The given year is a leap year"
elif [ $c2 -eq 0 ]
then
echo "The given year is not a leap year"
elif [ $c3 -eq 0 ]
then
echo "The given year is a leap year"
else
echo "The given year is not a leap year"
fi


