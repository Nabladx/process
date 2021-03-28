<?php
	$a = array(1.0, 2.0, 3.0, 4.0);
	$ar = array(1.0, 4.0, 9.0, 16.0);
	$arr[] = 4;
	$m = 0.0; $d = 0.0; $m_in_2 = 0.0; $m_2_in = 0.0;
	for($i = 0;$i < 4;$i++)
	{
		$arr[$i]=readline();
	}
	for($i = 0;$i < 4;$i++)
	{
		$m = $m + $a[$i] * $arr[$i];
	}
	$m_2_in = $m * $m;
	for($i = 0;$i < 4;$i++)
	{
		$m_in_2 = $m_in_2 + $ar[$i] * $arr[$i];
	}
	$d = $m_in_2 - $m_2_in;
	echo $m;
	echo " ";
	echo $d;
	echo " end program";
?>
