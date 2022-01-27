echo "Enter a 3 digit number: "
read n
temp=$n
val=`expr $temp % 10`
sum=$val
temp=`expr $n / 10`
val=`expr $temp % 10`
sum=`expr $sum + $val`
temp=`expr $temp / 10` 
val=`expr $temp % 10`
sum=`expr $sum + $val`
echo "Sum of the three digits = $sum"
