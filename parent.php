<?php
$pid = pcntl_fork();
if ($pid == -1){
	die('could not fork');
}
else if ($pid){
	pcntl_wait($status);
}
else{
	//start child
	for($i = 0;$i < 3;$i++)
	{
		echo exec('php -f index.php');
	}
}
?>
