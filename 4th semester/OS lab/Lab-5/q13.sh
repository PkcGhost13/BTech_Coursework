echo "Enter the seven digit number : "
read number

altdigit=0
div=1000000
echo "The alternate digits are :"
while [ $number -gt 0 ]
do 
n=$number
number=`expr $number % $div`
altdigit=`expr $n / $div`
altdigit=`expr $altdigit % 10`
echo "$altdigit"
div=`expr $div / 100`
done


