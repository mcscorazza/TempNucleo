## Exercício de fixação dos conteúdos apresentados na aula 2

### Enunciado do Exercício

Conforme apresentado no vídeo, da segunda aula remota, o Micrcontrolador RP2040, presente na Raspberry Pi Pico (w), possui ligado a um de seus canais no conversor analógico digital um sensor de temperatura, para monitoramento da temperatura no núcleo da CPU, com base nos exemplos do vídeo e o conteúdo do Datasheet, escreva um firmware que:
Através de Um Timer periódico, Leia a temperatura da CPU e a envie via serial para o computador;
Os códigos desenvolvidos devem ser colocados em uma conta do github e somente seu link deve ser enviado como resposta.

#### Compilando no Windows 
Para compilar o projeto no Windows, execute os seguintes comandos no diretório raiz do projeto

```console
mkdir build
cd build
cmake ..
ninja
```

#### Compilando em Sistemas Operacionais Baseados em Linux 
Para compilar o projeto em Sistemas Operacionais Baseados em Linux, execute os seguintes comandos no diretório raiz do projeto

```console
mkdir build
cd build
cmake ..
make
```


#### Saída do programa - Serial Output
```console
Leitura ADC: 877 | Valor voltagem: 0.70657 V | Temperatura do Núcleo: 26.67 .C
Leitura ADC: 876 | Valor voltagem: 0.70576 V | Temperatura do Núcleo: 27.14 .C
Leitura ADC: 874 | Valor voltagem: 0.70415 V | Temperatura do Núcleo: 28.07 .C
Leitura ADC: 873 | Valor voltagem: 0.70334 V | Temperatura do Núcleo: 28.54 .C
Leitura ADC: 870 | Valor voltagem: 0.70093 V | Temperatura do Núcleo: 29.95 .C
Leitura ADC: 869 | Valor voltagem: 0.70012 V | Temperatura do Núcleo: 30.42 .C
Leitura ADC: 867 | Valor voltagem: 0.69851 V | Temperatura do Núcleo: 31.35 .C
Leitura ADC: 866 | Valor voltagem: 0.69771 V | Temperatura do Núcleo: 31.82 .C
Leitura ADC: 867 | Valor voltagem: 0.69851 V | Temperatura do Núcleo: 31.35 .C
Leitura ADC: 866 | Valor voltagem: 0.69771 V | Temperatura do Núcleo: 31.82 .C
Leitura ADC: 865 | Valor voltagem: 0.69690 V | Temperatura do Núcleo: 32.29 .C
Leitura ADC: 868 | Valor voltagem: 0.69932 V | Temperatura do Núcleo: 30.88 .C
Leitura ADC: 866 | Valor voltagem: 0.69771 V | Temperatura do Núcleo: 31.82 .C
...

```
