echo "Enter the number of units consumed : "
read units

costPerUnit=7 #assumption

total=`expr $units \* $costPerUnit`

echo "Total bill of electricity is : $total"

