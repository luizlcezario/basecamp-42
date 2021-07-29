#!/bin/sh

export FT_LINE2=15
export FT_LINE1=7

cat /etc/passwd | awk -F : '{print $1}' |	sed '1~2d' |	rev |	sort -r |	sed -n $FT_LINE1,$FT_LINE2'p' |	tr '\n' ',' |sed 's/,/, /g' | 	sed 's/, $/./'	 			# buscar palavras pelo sepador na frnete do -F e o $ qual a posicao da palavra
sed '1~2d' |												#	APARTIR DA PRIMEIRA PULE 1 LINHA IMPRIMA UMA 
rev |  															# INVERTE OS LOGINS
sort -r |														#	ORDENA EM ORDEM ALFABETICA REVERSA
sed -n $FT_LINE1,$FT_LINE2'p' |			# imprimir da linha FT_LINE1 ate a linha FT_LINE2
tr '\n' ',' |		 										#	troca o \n (new line) por ,
sed 's/,/, /g' | 										# troca as , simples por , espaço 
sed 's/, $/./'											# troca o ultima virgula e espcao  por um . 

