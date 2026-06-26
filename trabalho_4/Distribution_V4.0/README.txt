-------------------------------------------------------------------------------
--	Autor: 	Ney Laert Vilar Calazans (nlvcalazans@gmail.com)
--
--	Título:	Material Introdutório para Emprego da Arquitetura do Conjunto de 
--		Instruções MIPS_S 
--			
--	Data de início desta distribuição:	22/05/2025
--	Versão: 							4.0
--	Revisado em:						08/06/2026
--
--	05/06/2026 - Ney Calazans
--		- Várias modificações na versão 4.0. Memória de Dados da versão 
--			prototipável passa a ser de 16Kbytes (2 módulos de 8KBytes, em
--			um novo par entidade/arquitetura criado [Data_Memory], um novo
--			mux na versão prototipável permite que o MIPS_S leia dados de um
--			periférico e não apenas da memória e revisão de vários pontos 
--			nos códigos de Sw, Hw e na documentação)
--	04/06/2025 - Ney Calazans
--		- O documento 5_4-MIPS_S_withBRAMS_Presentation_V3 da versão 3.1 da
--			distribuição continha erros que foram corrigidos, junto com 
--			alguns melhoramentos menores na apresentação. O novo documento
--			possui nome 5_4-MIPS_S_withBRAMS_Presentation_V4.pdf.
--	10/06/2025 - Ney Calazans
--		- Foi acrescentado um arquivo README.txt no diretório 
--			./Distribution_V3.3/2_MIPS_S_Sim, explicando a forma de gerar o
--			arquivo contendo instruções e dados de um programa para leitura
--			pelo testbench da MIPS_S_Sim (MIPS_S_Sim_tb.vhd). Note-se que
--			este formato é um pouco diferente do formato de entrada das mesmas
--			informações para a versão prototipável do MIPS_S.
--		- O documento 5_4-MIPS_S_withBRAMS_Presentation_V4.pdf foi revisto
--			e atualizado. A nova versão possui nome 
--			5_4-MIPS_S_withBRAMS_Presentation_V5.1.pdf.
--	22/06/2025 - Ney Calazans
--		- O documento 5_4-MIPS_S_withBRAMS_Presentation_V5.1.pdf foi revisto
--			e atualizado. A nova versão possui nome 
--			5_4-MIPS_S_withBRAMS_Presentation_V5.2.pdf
--	11/11/2025 - Ney Calazans
--		- A principal alteração foi o programa le_mars, generalizado para 
--			aceitar a especificação de múltiplos módulos de memória
--	25/11/2025 - Ney Calazans
--		- Bug no programa le_mars corrigido e várias pequenas atualizações
--			de arquivos
--	26/11/2025 - Ney Calazans
--		- Bug no programa SomaVet.asm corrigido e atualizações dos slides
--	04/12/2025 - Ney Calazans
--		- Para viabilizar entrega no prazo, o trabalho no Projeto 4 foi 
--			simplificado
--		- Os limites da memória de dados foram alterados, para acomodar  
--			16 Kbytes de memória (MIPS_S - 8 Kbytes e Periférico 8 Kbytes)
--		- A verificação de endereço de memória de dados válidos agora 
--			considera também os endereços gerados por periféricos
--	08/06/2026
--		- Enunciado do T4 agora contempla operações de Sw e Hw lendo e 
--			escrevendo um no outro
-------------------------------------------------------------------------------

Esta distribuição contém arquivos para uso da arquitetura MIPS_S em suas formas
simulável e prototipável, junto com documentação associada.

Seu status na data 10/06/2025 é em princípio definitivo, todos os materiais
foram razoavelmente testados. Bugs podem surgir no decorrer do trabalho de
desenvolvimento, claro. Todos os materiais foram validados via simulação e/ou 
prototipação, quando aplicável. Alguns dos documentos poderá eventualmente 
ser atualizado em relação à descrição de hardware mais recente.

A distribuição possui a estrutura de arquivos dada pela árvore abaixo. Além 
deste arquivo (README.txt), existem 4 subdiretórios contendo: (1) Documentos
explicativos (diretório 0_Docs); (2) Exemplos de fontes programas exemplo em
linguagem de montagem do MIPS (limitado ao ISA da MIPS_S, diretório 
1_AssemblyExs); (3) Distribuição da versão simulável do MIPS_S, a MIPS_S_Sim,
diretório 2_MIPS_S_Sim); (3) Distribuição da versão prototipável do MIPS_S, a
MIPS_S_Prt, diretório 3_MIPS_S_Prt). Também, alguns arquivos de configuração
de formas de onda (.wcfg) são fornecidos.

O material foi desenvolvido para plataformas de prototipação da Xilinx, 
quando necessário referência à prototipação de hardware. A plataforma
específica é a Nexys A7, mas funciona igualmente bem em outras plataformas
Digilent, como Nexys e Nexys 2. Pequenas adaptações são necessárias para
outras plataformas da Xilinx, ver versões futuras da distribuição.

Em 02/06/2025 foram acrescentados tutoriais alternativos para uso do 
software Vivado, em adição aos anteriores para o software legado ISE.

Em 10/06/2025 foi acrescentado um novo README.txt no diretório
./Distribution_V3.3/2_MIPS_S_Sim, explicando a forma de gerar o arquivo
contendo instruções e dados de um programa para leitura pelo testbench
da MIPS_S_Sim (MIPS_S_Sim_tb.vhd). Também, o documento 
5_4-MIPS_S_withBRAMS_Presentation_V4.pdf foi revisto e atualizado que tem agora
o mome 5_4-MIPS_S_withBRAMS_Presentation_V5.1.pdf.

Em 22/06/2025 os arquivos 5_4-MIPS_S_withBRAMS_PresentationVx.y.pdf e 
5_3-MIPS_IntroProgramacao.pdf foram atualizados. Os fontes dos códigos 
assembly foram todos revisados (comentários em inglês e cabeçalhos 
acrescentados onde não havia e unificados).

Em 11/11/2025 houve uma alteração significativa, o programa le_mars,
foi generalizado para aceitar a especificação de múltiplos módulos de
memória. Além disto, o trabalho prático proposto no arquivo
5_4-MIPS_S_withBRAMS_Presentation_V5.3.pdf agora é mais exigente,
para induzir o tratamento de comunicação bidirecional entre
processador e periféricos. Vários documentos foram atualizados,
expandidos e/ou corrigidos em relação à versão 3.4 da distribuição.

Em 25/11/2025 um bug no programa le_mars, que não tratava corretamente
os valores default para parâmetros opcionais, foi corrigido.

Em 26/11/2025 um bug no programa SomaVet.asm, que estava com o rótulo
end no lugar incorreto, foi corrigido.

Em 04/12/2025, os limites da memória de dados foram alterados, para acomodar  
16 Kbytes de memória (MIPS_S - 8 Kbytes e Periférico 8 Kbytes). Também, a
verificação de endereço de memória de dados válidos agora considera também
os endereços gerados por periféricos. Alterações todas realizadas no 
arquivo MIPS_S_withBRAMs.vhd.

Em 05/06/2025, na versão 4.0 do ambiente, a Memória de Dados da versão 
prototipável do MIPS_S_withBRAMs passa a ser de 16Kbytes, com 2 módulos de 
8KBytes acomodados em um novo par entidade/arquitetura (Data_Memory).
Além disto, um novo mux no MIPS_S_withBRAMs permite que o MIPS_S leia dados
de um periférico e não apenas da memória. Várias revisões foram necessárias
em vários pontos dos códigos de Sw, Hw e na documentação.

Dúvidas e problemas, reporte-os ao autor:
Ney Laert Vilar Calazans (nlvcalazans@gmail.com)

Distribution_V4.0/
├── 0_Docs
│   ├── 1-Intro_FPGAS&Simulacao_ISE.pdf
│   ├── 1-Intro_FPGAS&Simulacao_Tut1_Vivado.pdf
│   ├── 2-TutsSim-Prot_FPGAs_Tut1Tut2_ISE_Nex12.pdf
│   ├── 2-TutsSim-Prot_FPGAs_Tut2_ISE-Vivado_NexA7.pdf
│   ├── 5_0-MIPS_AppA-comErrata_V7.pdf
│   ├── 5_1-Spec_ArqOrg_MIPS_S_V3.02_Port.pdf
│   ├── 5_2-MIPS_S-Apresentacao_V11.pdf
│   ├── 5_3-MIPS_IntroProgramming.pdf
│   ├── 5_4-MIPS_S_withBRAMS_Presentation_V5.7.pdf
│   ├── 5_5-Simulacao_MIPS_S_withBRAMs_V5.9.pdf
│   └── 5_6-ExercPropostos_MIPS_S_V1.0.pdf
├── 1_AssemblyExs
│   ├── Allinsts_MIPS_S.asm
│   ├── mult_div.asm
│   ├── SBLB_Tests.asm
│   └── SomaVet.asm
├── 2_MIPS_S_Sim
│   ├── README.txt
│   ├── Sw_Wcfg_files
│   │   ├── Allinsts_MIPS_S.txt
│   │   ├── mult_div.txt
│   │   ├── Wave-Allinst.wcfg
│   │   └── Wave-muldiv.wcfg
│   └── VHDL
│       ├── MIPS_S_Sim_tb.vhd
│       ├── MIPS_S_Sim.vhd
│       └── mult_div.vhd
├── 3_MIPS_S_Prt
│   ├── le_MARS
│   │   ├── le_mars.c
│   │   ├── le_mars.exe
│   │   ├── Memory_Srcs
│   │   │   ├── Allinsts_MIPS_S_data.txt
│   │   │   ├── Allinsts_MIPS_S_prog.txt
│   │   │   ├── SBLB_data.txt
│   │   │   ├── SBLB_prog.txt
│   │   │   ├── SomaVet_data.txt
│   │   │   └── SomaVet_prog.txt
│   │   └── Memory_VHDLs
│   │       ├── Allinsts_MIPS_S_memory.vhd
│   │       ├── SBLB_memory.vhd
│   │       └── SomaVet_memory.vhd
│   ├── Nexys-A7-100T-Master.xdc
│   ├── README.txt
│   ├── Sw_Wcfg_files
│   │   ├── LBSB_wform.wcfg
│   │   ├── SomaVet_wform.wcfg
│   │   ├── Wave-Allinst.wcfg
│   │   └── Wave-muldiv.wcfg
│   └── VHDL
│       ├── dspl_drv_Nexys_1_2.vhd
│       ├── dspl_drv_Nexys_A7.vhd
│       ├── MIPS_S_com_perif_tb.vhd
│       ├── MIPS_S_Prt.vhd
│       ├── MIPS_S_sem_perif_tb.vhd
│       ├── MIPS_S_withBRAMs.vhd
│       └── mult_div.vhd
└── README.txt

11 directories, 48 files
