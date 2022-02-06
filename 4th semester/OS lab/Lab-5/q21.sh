echo "Enter the decimal number :"
read num
rem=1
bno=" "
while [ $num -gt 0 ]
do
rem=`expr $num % 2 `
bno=$rem$bno
num=`expr $num / 2 `
done

echo "Equivalent Binary number is :" $bno ;
