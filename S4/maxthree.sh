echo "enter the 3 number"
read x
read y
read z
if [ $x -gt $y ]
then
if [ $x -gt $z ]
then
echo "$x"
else
echo "$z"
fi
else
if [ $y -gt $z ]
then
echo "$y"
else
echo "$z"
fi
fi
