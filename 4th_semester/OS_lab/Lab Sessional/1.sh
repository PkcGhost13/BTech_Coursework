echo "Enter the Range : "
read n
read n1
echo "Armstrong Numbers in range are : "
for ((i = $n; $i <= $n1; i++)); do
    s=0
    t=$i
    l=$i
    while [ "$l" != 0 ]; do

        r=$(expr $l % 10)

        d=$(expr $r \* $r \* $r)

        s=$(expr $s + $d)

        l=$(expr $l / 10)

    done
    if [ $t -eq $s ]; then
        echo "$t"
    fi
done
