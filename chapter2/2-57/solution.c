after excute show-bytes:
-------------------------------
calling show_twocomp
 39 30
 c7 cf
Calling simple_show_a
begin show int 0x87654321 from 1th byte to 3th byte
 21
 21 43
 21 43 65
Calling simple_show_b
begin show int 0x12345678 from 1th byte to 3th byte
 78
 78 56
 78 56 34
Calling float_eg
For x = 3490593
begin show int 3490593 
 21 43 35 00
begin show float 3490593.000000 
 84 0c 55 4a
For x = 3510593
begin show int 3510593 
 41 91 35 00
begin show float 3510593.000000 
 04 45 56 4a
Calling string_ueg
 41 42 43 44 45 46
Calling string_leg
 61 62 63 64 65 66
 -------------------------------
操作系统：macOS Sierra 10.12.6
处理器：inter core i7
由输出信息可推断，该机器内存存储方式为：小端法