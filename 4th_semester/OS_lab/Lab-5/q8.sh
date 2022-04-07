echo "Enter the Basic salary : "
read salary

DA=`expr $salary \* 15 / 100`
HRA=`expr $salary \* 10 / 100`

grossSalary=`expr $salary + $DA + $HRA`

echo "The gross salary is : $grossSalary"

