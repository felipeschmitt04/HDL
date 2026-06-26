-------------------------------------------------------------------------------
--	Autor: 	Ney Laert Vilar Calazans (nlvcalazans@gmail.com)
--
--	Título:	Informações Úteis para uso da Versão Simulável do Processador
--		MIPS_S Simulável (MIPS_S_Sim.vhd)
--			
--	Data de início do documento:	06/06/2025
--	Revisado em:					06/06/2025
-------------------------------------------------------------------------------

Nos documentos disponibilizados de distribuição da MIPS_S, há vários destes
que explicam em detalhes como gerar os conteúdos das memórias sintetizáveis
para uso da versão Prototipável do MIPS (MIPS_S_Prt.vhd), através dos "dumps"
de memória de um programa desenvolvido no simulador MARS e o emprego do 
software le_mars.exe, disponibilizado na distribuição. 

Contudo, a versão simulável do MIPS_S (MIPS_S_Sim.vhd) é disponibilizada com
um testbench (o arquivo MIPS_S_Sim_tb.vhd) que, embora também baseado nos
"dumps" de memórias de instruções e dados do MARS, possui um formato de 
entrada um pouco distinto. Este documento explica o formato do arquivo de
entrada pressuposto pelo testbench do MIPS_S_Sim.

O processo de geração dos "dumps" é o mesmo descrito em documentos tais como
5_4-MIPS_S_withBRAMS_Presentation_Vx.pdf e/ou 
5_5-Simulacao_MIPS_S_withBRAMs_Vy.z.pdf.
No entanto, o pós-processamento destes "dumps" deve ser feito da seginte forma:

1) Assuma, sem perda de generalidade, que os "dumps" das áreas de memória
estão em arquivos denominados prog.txt (para a Memória de Instruções) e 
data.txt (para a Memória de Dados).

2) Abra o arquivo prog.txt em um editor de textos. A aparência do início 
deste arquivo deve ser como abaixo:
 Address    Code        Basic                     Source

0x00400000  0x3c011001  lui $1,0x00001001     17   	la	$t0,V1		# generate pointer to V1 source vector
0x00400004  0x3428002c  ori $8,$1,0x0000002c       
0x00400008  0x3c011001  lui $1,0x00001001     18   	la	$t1,V2		# generate pointer to V2 source vector
0x0040000c  0x34290058  ori $9,$1,0x00000058
...

3) Substitua as linhas acima da linha com o endereço 0x00400000 por uma
única linha, contendo o seguinte conteúdo (é importante que o texto inicie
exatamente na coluna 1 da linha, que vai ser a nova primeira linha do
arquivo prog.txt):
Text Segment

4) Repita o processo para o arquivo data.txt. Este último não possui um
cabeçalho. Assim basta acrescentar uma nova primeira linha no arquivo
com o conteúdo dado abaixo (de novo, é importante que o texto inicie
exatamente na coluna 1 da linha, que vai ser a nova primeira linha do
arquivo data.txt):
Data Segment

5) Junte os dois novos arquivos em apenas um arquivo texto, de nome, por
exemplo myprog.txt. Normalmente, o conteúdo do arquivo prog.txt vem antes
e o do arquivo data.txt vem depois, mas a ordem é irrelevante, o arquivo
MIPS_S_Sim_tb.vhd processa os conteúdos adequadamente, qualquer que seja
a ordem.
O resultado deve ficar, por exemplo, assim:
Text Segment
0x00400000  0x3c011001  lui $1,0x00001001     17   	la	$t0,V1		# generate pointer to V1 source vector
0x00400004  0x3428002c  ori $8,$1,0x0000002c       
0x00400008  0x3c011001  lui $1,0x00001001     18   	la	$t1,V2		# generate pointer to V2 source vector
0x0040000c  0x34290058  ori $9,$1,0x00000058       
0x00400010  0x3c011001  lui $1,0x00001001     19   	la	$t2,V3		# generate pointer to V3 destination vector
0x00400014  0x342a0000  ori $10,$1,0x00000000      
0x00400018  0x3c011001  lui $1,0x00001001     21   	la	$t3,size	# get address of size
0x0040001c  0x342b0084  ori $11,$1,0x00000084      
0x00400020  0x8d6b0000  lw $11,0x00000000($11)22   	lw	$t3,0($t3)	# register $t1 contains the size of the array
0x00400024  0x19600009  blez $11,0x00000009   25   	blez	$t3,end		# if size is/becomes 0, end of processing
0x00400028  0x8d0c0000  lw $12,0x00000000($8) 26   	lw	$t4,0($t0)
0x0040002c  0x8d2d0000  lw $13,0x00000000($9) 27   	lw	$t5,0($t1)
0x00400030  0x018d6021  addu $12,$12,$13      28   	addu	$t4,$t4,$t5 
0x00400034  0xad4c0000  sw $12,0x00000000($10)29   	sw	$t4,0($t2)	# update V3 vector element in memory
0x00400038  0x25080004  addiu $8,$8,0x0000000430   	addiu	$t0,$t0,4	# advance pointers
0x0040003c  0x25290004  addiu $9,$9,0x0000000431   	addiu	$t1,$t1,4	
0x00400040  0x254a0004  addiu $10,$10,0x00000032   	addiu	$t2,$t2,4	
0x00400044  0x256bffff  addiu $11,$11,0xffffff33   	addiu	$t3,$t3,-1	# decrement elements to process counter
0x00400048  0x08100009  j 0x00400024          34   	j	loop		# execute the loop another time
0x0040004c  0x08100013  j 0x0040004c          37   end:	j	end

Data Segment
0x10010000    0x00000000 0x00000000 0x00000000 0x00000000 0x00000000 0x00000000 0x00000000 0x00000000 
0x10010020    0x00000000 0x00000000 0x00000000 0x01000011 0x000000ff 0x00000003 0x00000014 0x00000878 
0x10010040    0x00000031 0x00000062 0x00000010 0x00000005 0x00000016 0xab000002 0x02000002 0x000000f4 
0x10010060    0x00000003 0x00000014 0x00000878 0x00000031 0x00000062 0x00000010 0x00000005 0x00000016 
0x10010080    0x21000020 0x0000000b 0x00000000 0x00000000 0x00000000 0x00000000 0x00000000 0x00000000 
0x100100a0    0x00000000 0x00000000 0x00000000 0x00000000 0x00000000 0x00000000 0x00000000 0x00000000 

6) Acrescente o novo arquivo (myprog.txt) ao projeto ISE/Vivado e faça a
simulação do testbench MIPS_S_Sim_tb.vhd. 
ATENÇÃO: o arquivo myprog.txt não é identificado como arquivo de projeto.
Então há cuidados a tomar:
	6.1) Para o ISE, garanta, quando for acrescentar myprog.txt, que se
	escolha a opção All Files no campo de formato de arquivos da janela
	de adição de arquivos ao projeto. Isto garante que se pode selecionar
	arquivos com extensão não reconhecida pelo ambiente ISE.
	6.2) Para o Vivado, além de fazer o mesmo processo que para o ISE, 
	é importante garantir que o arquivo myprog.txt está disponível no 
	mesmo diretório onde os fontes VHDL do projeto se encontram. Isto 
	normalmente não vai acontecer, pois o Vivado separa os diferentes 
	tipos de arquivo do projeto (fontes VHDL ou Verilog ou System Verilog,
	arquivos de restrições, arquivos de formas de onda e arquivos de tipo
	não identificado) em diretórios separados. Logo, é necessário 
	manualmente copiar ou mover o arquivo myprog.txt para o mesmo diretório
	onde se encontra o arquivo MIPS_S_Sim_tb.vhd. Um exemplo de caminho 
	para diretório onde o Vivado armazena os VHDLs de um projeto seria
	(supondo um projeto Vivado de nome MIPS_S_BRAMs_HoldTest):
	./MIPS_S_BRAMs_HoldTest/MIPS_S_BRAMs_HoldTest.srcs/sources_1/imports/VHDL/
  
