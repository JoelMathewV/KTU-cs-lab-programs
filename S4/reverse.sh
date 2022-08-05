echo "Enter the number"
read x
s=0
while [ $x -gt 0 ]
do
s=`expr $s * 10 + $s % 10`
done
echo "$s"
