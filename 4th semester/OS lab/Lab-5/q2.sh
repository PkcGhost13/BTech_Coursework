echo "Write first integer :"
read num1
echo "Write second integer :"
read num2 
add=`expr $num1 + $num2`
echo "Addition of the entered integers is : $add"
subtract=`expr $num1 - $num2`
echo "Subtraction of the entered integers is : $subtract"
multiply=`expr $num1 \* $num2`
echo "Multiplication of the entered integers is : $multiply"
divide=`expr $num1 / $num2`
echo "Division of the entered integers is : $divide"
modulus=`expr $num1 % $num2`
echo "Modulus of the entered integers is : $modulus"


 
