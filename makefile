#caminhos para os organização dos arquivos na arvore
SRC_DIR := src
INC_DIR := include
CRT_DIR := libs/carta

#Definições para o compilador GCC
CC := gcc
CFLAGS := -Wall -I$(INC_DIR) -I$(CRT_DIR)


#Arquivos alvo

SRCS := $(SRC_DIR)/main.c $(CRT_DIR)/carta.c
#Saida com o executavel
OUT := supertrunfo

# Regras Possibilita a utilizar o make
all: $(OUT)

# Puro suco da utilização de 
#
#	Subistitui a variável out
#	Iserir a linha da variavel SRCS
#	Faz a operação dos Cflas + o compilador
#	Da uma saida
# Peças gerais para qualquer makefile

$(OUT): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@

#Criamos o make clean removendo o executavel 
clean:
	rm -f $(OUT)
