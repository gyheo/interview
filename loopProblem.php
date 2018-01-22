<?php 
	/*
		problem
		1. 1부터 10까지의 합을 출력하는 프로그램
		기본 문법의 경우 reference 없이 소스 코드를 자유롭게 작성하는 가를 평가했던 회사

		2. 주어진 배열에 대한 평균 출력
		과정은 같은데 php의 count와 javascript의 length를 착각했다
	*/

	$sum = 0;
	for($i = 1; $i <= 10; $i++){
		$sum += $i;
	}

	$arr = [1, 2, 3, 5, 6, 7];
	$total = 0;
	$average = 0;

	// 실수한 부분
	// for($i = 0; $i < $arr.length; $i++){
	//	$total += $arr[i];
	// }
	
	for($i = 0; $i < count($arr); $i++){
		$total += $arr[$i];
	}

	$average = $total / count($arr);

	print "1부터 10까지의 총합은 ". $sum . "입니다 \n";
	print "배열 arr의 평균은 " . $average . "입니다 \n";
?>
