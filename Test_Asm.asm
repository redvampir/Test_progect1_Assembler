.code

Make_Sum proc ;Начало процессора(Она же функция, первое это имя функции второе начало)
;extern "C" int Make_Sum(int one_value, int another_value)
;ECX - one_value
;RDX - another_value
;R8 - если бы передали третий параметр.
;R9 - если бы передавали четвертый параметр
;Возврат в регистре RAX

	mov eax, ecx ;-присваеваем eax первую переменную
	add eax, edx ;-складываем eax с edx(второй переменной)
	
	ret	;-делаем возврат

Make_Sum endp

end