#!/bin/sh
#export FT_NBR1=\\\'\?\"\\\"\'\\
echo $FT_NBR1								#dar valor as variaveis
#export FT_NBR2=rcrdmddd												#dar valor as variaveis

echo $FT_NBR2 + $FT_NBR1  | 									#imprime as duas varaiveis 
tr 'mrdoc' '01234' |													#transforma os valores que estao nessa base mrdoc, em valores calculaveis mudando para 01234
tr "'\\\\\"?\!" "01234" |											#transforma os valores que estao nessa base '"?\!, em valores calculaveis mudando para 01234
xargs echo "obase=13;ibase=5;" | 							#ele passa as variaveis agora em numeros da base de 5  para a base de 13 
bc |tr "0123456789ABC" "gtaio luSnemf"       #o bc faz a somatoria entre as duas e o tr substitui os numeor spor letras 
