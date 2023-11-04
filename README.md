# Experimento de Transmissão de Dados Wi-Fi com ESP32 Heltec V3 e Heltec V2

Este repositório contém o código e a documentação relacionados ao experimento de transmissão de dados utilizando a tecnologia Wi-Fi com os módulos ESP32 Heltec V3 e Heltec V2. O experimento tem como objetivo caracterizar a transmissão de dados em diferentes cenários, incluindo distâncias variadas e obstáculos simulados, como um bloco de sala de aula.

## Material Utilizado

- Computador
- 1 módulo ESP32 Heltec V2
- 1 módulo ESP32 Heltec V3
- 1 PowerBank para fornecimento de energia
- 1 script em Python para a aquisição de dados recebidos pela porta serial
- 2 scripts em C++ para a transmissão de dados via Wi-Fi.

## Objetivos

- Avaliar a taxa de transferência de dados em uma rede Wi-Fi em diferentes distâncias.
- Investigar o impacto das obstruções, como um bloco de sala de aula, na qualidade e confiabilidade da transmissão Wi-Fi.
- Analisar a potência do sinal e a taxa de erro de pacotes em função da distância e da presença de obstáculos.
- Identificar as limitações e os pontos fortes da tecnologia Wi-Fi em cenários desafiadores.
- Propor possíveis otimizações para a transmissão Wi-Fi em cenários com obstáculos.

## Estrutura do Repositório

- `src/`: Contém os scripts em C++ para a transmissão de dados com os módulos Heltec V3 e Heltec V2.
- `python_script/`: Inclui o script em Python para a aquisição de dados recebidos pela porta serial.
- `documentacao/`: Pode conter documentação adicional, diagramas e imagens relacionadas ao experimento.

## Executando o Experimento

1. Certifique-se de ter os módulos ESP32 Heltec V3 e Heltec V2 corretamente configurados.
2. Execute os scripts em C++ para iniciar a transmissão de dados com diferentes configurações.
3. Execute o script em Python para aquisição e análise dos dados recebidos.
4. Documente os resultados obtidos e quaisquer observações relevantes.

## Contribuições

Contribuições e melhorias são bem-vindas. Sinta-se à vontade para abrir problemas (issues) e enviar pull requests para este repositório.
