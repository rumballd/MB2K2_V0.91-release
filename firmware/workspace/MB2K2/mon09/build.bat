srec_cat os9.bin -binary -offset 0x0000 -o os9.srec -Output_Block_Size 16
a09 -l -s -oTSC -oNCL mon09.txt
s2br mon09.s09 os9.srec mem.h
copy mem.h ..\src\RAM\mem.h
del mem.h
