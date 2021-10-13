<?php
echo "for loop <br>";
for($i=1; $i<=10; $i=$i+1)
{
	echo $i;
	echo "<br>";
}

echo "While loop <br>";
$i=1;
while ($i <= 10)
{
	echo $i;
	echo "<br>";
	$i=$i+1;
}


echo "do while loop <br>";
$i=1;
do
{
	echo $i;
	echo "<br>";
    $i=$i+1;
}while($i<=10);


echo "for each loop <br>";
$arr= array(1,2,3,4,5,6);
foreach($arr as $j)
{
    echo $j;
    echo "<br>";
}
?>