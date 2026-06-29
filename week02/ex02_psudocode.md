BEGIN [โปรแกรมแสดงเกรด]

INPUT SCORE

IF SCORE  >= 80 THEN grade  = "A"

ELSE IF SCORE >= 70 THEN grade = "B"

ELSE IF SCORE >= 60 THEN grade = "C"

ELSE IF SCORE >= 50 THEN grade = "D"

ELSE IF SCORE = "F"

END IF

OUTPUT grade







BEGIN [นับ1ถึงN]

INPUT A , B -- > A และ  B

IF A  > B THEN 

 แสดง A

ELSE 

แสดง B

END IF

END


BEGIN [การหาค่าสูงสุดจาก2ตัวเลข]

INPUT N

 i = 1

FOR i FROM 1 TO N DO

    พิมพ์ i

    i = i+1

END FOR

WHILE  i <= N DO

    i = i+1

END WHILE
