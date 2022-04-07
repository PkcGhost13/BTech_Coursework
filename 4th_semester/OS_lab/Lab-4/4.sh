echo "Enter a Number : "
read a
arm=0
c=$a
f=0
while [ $c -gt 0 ]
do
	c=`expr $c / 10`
	f=`expr $f + 1`
done
c=$a
while [ $c -gt 0 ]
do
	ld=`expr $c % 10`
	ff=$f
	m=1
	
	while [ $ff -gt 0 ]
	do
		m=`expr $ld \* $m`
		ff=`expr $ff - 1`
	done
	arm=`expr $arm + $m`
	c=`expr $c / 10`
done
if [ $arm -eq $a ]
then
echo "It is an Armstrong Number"
else
echo "It is not an Armstrong Number"
fi

