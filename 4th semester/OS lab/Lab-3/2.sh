echo "Enter the time in seconds"
read s
hours=`expr $s / 3600`
d=`expr $s % 3600`
min=`expr $d / 60`
sec=`expr $d % 60`
echo "HH:MM:SS "
echo "$hours:$min:$sec"
