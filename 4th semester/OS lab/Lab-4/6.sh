echo "Enter the range num1 and num2:"
read n1 n2
echo "Given range from user is $n1 anf $n2 "
echo "Prime Numbers are:"
while [ $n1 -le $n2 ]
do
i=2; f=1
while [ $i -lt $n1 ]
    do
        if [ `expr $n1 % $i` -eq 0 ]
        then
            f=0
            break
        else
            i=`expr $i + 1`
        fi
    done
    if [ $f -eq 1 ]
    then
        echo $n1
    fi
    n1=`expr $n1 + 1`
done
