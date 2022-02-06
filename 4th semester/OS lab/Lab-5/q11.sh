echo "Enter the number of hours :"
read hours

overtime=`expr $hours - 8`
wage=15 #assumption

if [ $overtime -gt 0 ]
then
amount=`expr $overtime \* $wage`
echo "Overtime payment is : $amount"
else
echo "No overtime hours"
fi



