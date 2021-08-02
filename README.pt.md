Você pode ler esse texto em [Inglês (EN)](https://github.com/russibc/dht11/blob/main/README.md) ou [Português (PT-BR)](https://github.com/russibc/dht11/blob/main/README.pt.md).

# Leitura de dados do DHT11 usando NodeMCU (ESP-12E)

## :warning: Antes de executar o código, siga estes passos

### Step 1: Inclua o ESP8266 no gerenciador de bibliotecas

Abra o menu `File` > `Include Library` > `Manage Libraries`.

No item `Additional Boards Manager URLs` inclua o link: 
`https://arduino.esp8266.com/stable/package_esp8266com_index.json`

### Step 2: Instale a placa ESP8266

Abra o menu `Tools` > `Board` > `Board Manager`.

Instale a versão `2.7.4` da biblioteca de nome `esp8266` feita pela Esp8266 Community.

### Step 3: Select NodeMCU board

Abra o menu `Tools` > `Board` > `ESP8266 Boards`.

Selecione `NodeMCU 1.0 (ESP-12E Module)`.

### Step 4: Install libraries

Abre o menu `Sketch` > `Preferences`. 

Encontre e instale as seguintes bibliotecas:
**DHT Sensor Library** e **Adafruit Unified Sensor** feitas pela Adafruit.
